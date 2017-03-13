 // ======================================================================================
// 
// HELPER FUNCTIONS
// 
// ======================================================================================

// --------------------------------------------------------------------------------------
// Cut and pasted from Shadow_Projections.fx

// --------------------------------------------------------------------------------------
#define			sp_umax		0.5f		// tex-coord scale factor
#define			sp_xmin		0.01f		// min dist factor
#define			sp_xmax		0.75f		// max dist factor
 
#define			sp_offset	( sp_umax * ( sp_xmax + sp_xmin ) / sp_xmax )
#define			sp_scale	( sp_offset * sp_xmin )

// --------------------------------------------------------------------------------------
// This function normalises the world space units and makes it camera relative

float2 xformNormaliseWorldSpace( float2 worldxz , float2 local_campos)
{
	//
	// relocate coord into local normalised space
	//
	
	worldxz			/= 2560.0f;
	worldxz			-= local_campos.xy;
	
	return			worldxz;
}


// --------------------------------------------------------------------------------------
// This function maps a normalised camera space position to a texture coordinate
// these coords need either clipping or clamping if they are out of range

float2 xformCamSpaceToPerspectiveTextureSpace( float2 camxz)
{
	//
	// calculate ratio
	//
	
	float2 x		= abs( camxz );
	float2 u		= sp_offset - sp_scale / ( x + sp_xmin );
	u				*= sign( camxz );

	//
	// move relative to centre of map
	//
	
	return			 float2( 0.5f , 0.5f ) +  u;
}


//
// Returns the second coordinate and makes sure it isn't more than 0.5 away from the
// first in u or v.
//

float2 wrap_coord(float2 first, float2 second)
{
	float2 delta;
	
	delta  = second - first;
	delta += float2(0.5,0.5);
	delta  = frac(delta);
	delta -= float2(0.5,0.5);
	delta += first;
	
	return delta;
}

//
// Desaturates/saturates. 0 => greyscale, 0.5 => unchanged, 1.0 => saturated, 
//

half3 saturate_desaturate(half3 colour, half saturation)
{
	half  brightness = dot(colour, float3(0.05,0.05,0.05));
	half3 ans        = half3(brightness,brightness,brightness) + (colour - half3(brightness,brightness,brightness)) * (saturation*1.5);
	
	return ans;
}




// ======================================================================================
// 
// CONSTANTS, SAMPLERS AND STRUCTURES.
// 
// ======================================================================================

//
// VShader constants.
//

float4x4 ProjectionMatrix	: register(c0);
float4   Tiling				: register(c4);
float4   CamPosForShadow	: register(c5);
float3   CamPos				: register(c6);
float4   GroupUVOriginScale	: register(c7);

//
// PShader constants.
//

float3	sun_colour					: register(c0);
float3	sun_direction				: register(c1);
float4	ambient_norm_sun_angle		: register(c2);
float3  fill_colour					: register(c3);
float3  fill_direction				: register(c4);
float4	pixel_shader_params			: register(c5);
float4  cobble_pattern_to_group_uv	: register(c6);

#define MUD_FADE		(pixel_shader_params.x)		// 4.0
#define MUD_WIDTH		(pixel_shader_params.y)		// 0.2
#define COBBLE_EXTENT	(pixel_shader_params.z)		// 0.3
#define GROUT_WIDTH		(pixel_shader_params.w)		// 0.45

//
// Our samplers.
//

sampler sampler_group				: register(s0);
sampler sampler_terrain_alignment	: register(s1);
sampler sampler_terrain_normal		: register(s2);
sampler sampler_shadow_tex			: register(s3);
sampler sampler_mud					: register(s4);
sampler	sampler_cobble_pattern		: register(s5);
sampler	sampler_cobble_normal		: register(s6);
sampler	sampler_cobble_diffuse		: register(s7);
sampler	sampler_grout				: register(s8);
sampler sampler_horizon				: register(s9);

//
// input/output strucutres.
//

struct VSINPUT
{
	float4 position : POSITION;
};

struct VSOUTPUT
{
	float4 position						: POSITION;
	float4 shadow_tex_coord_max_alpha	: TEXCOORD0;
	float2 uv_terrain					: TEXCOORD1;	// For alignment map and terrain normal.
	float2 uv_group						: TEXCOORD2;
	float2 uv_mud_grout					: TEXCOORD3;
	float2 uv_cobble_pattern			: TEXCOORD4;
	float2 uv_cobble_diffuse			: TEXCOORD5;
};

struct PSOUTPUT
{
	float4 colour : COLOR;
};



// ======================================================================================
//
// VERTEX SHADER.
//
// ======================================================================================

VSOUTPUT vs_main(VSINPUT input)
{
	VSOUTPUT ans;
	
	//
	// Find output position.
	//
	
	ans.position = mul(input.position,ProjectionMatrix);
	
	//
	// The middle of the terrain... to maintain accuracy in uv mapping.
	//
	
	const float2 terrain_middle = float2(1024 * 2.5 / 2, 1024 * 2.5 / 2);
	
	//
	// What's the max alpha we want here?
	//
	
	float dist          = length(input.position.xyz - CamPos.xyz);
	float along         = saturate((dist - 10.0f) * (1.0F / 250.0f));
	float mud_alpha     = Tiling.y;
	float overall_alpha = lerp(0.9, 0.5, along);
	
	//
	// Calculate uvs.
	//

	ans.shadow_tex_coord_max_alpha.xy	= xformNormaliseWorldSpace(input.position.xz, CamPosForShadow.xy);
	ans.shadow_tex_coord_max_alpha.z	= mud_alpha;
	ans.shadow_tex_coord_max_alpha.w	= overall_alpha;
	ans.uv_terrain						= input.position.xz * (1.0 / (1024.0 * 2.5));
	ans.uv_group						= (input.position.xz - GroupUVOriginScale.xy) * GroupUVOriginScale.zw;
	ans.uv_mud_grout					= (input.position.xz - terrain_middle) * Tiling.x;
	ans.uv_cobble_pattern				= (input.position.xz - terrain_middle) * Tiling.z;
	ans.uv_cobble_diffuse				= (input.position.xz - terrain_middle) * Tiling.w;
	
	return ans;
}

//
// Pixel shader lighting.
//

float3 lighting_for_normal(float3 norm, float shadowfactor, float sunfactor, float selfillum)
{
	float dprod_sun  = saturate(dot(norm,sun_direction ));
	float dprod_fill = saturate(dot(norm,fill_direction));

	float3 lighting;
	
	lighting  = (sun_colour * dprod_sun * sunfactor + fill_colour * dprod_fill);
	lighting += ambient_norm_sun_angle.rgb;
	lighting *= shadowfactor;
	lighting += selfillum;
	
	return lighting;

	/*





	half3 bump_norm = decompress_normal(norm_tex);
	half4 land_norm = tex2D( LandNormSampler, blendtexcoord);
	half3 final = land_norm.a * Ambient;

	land_norm.xyz = land_norm.xyz * 2.0f - 1.0f;
	
	half3 norm = perturb_normal(land_norm.xyz, bump_norm );
	
#ifdef USE_FILL		 
	final += SunCol[1].xyz * saturate(dot(norm.xyz, SunVec[1].xyz)) ;
#endif

	half horiz = tex2D( HorizMapSampler, blendtexcoord ).a;
	half sunfactor=  saturate((SunVec[0].a - horiz)* 16.f);

	final += sunfactor * SunCol[0].xyz * (saturate(dot(norm.xyz, SunVec[0].xyz))) ;

	return final;


	*/
}


PSOUTPUT ps_main(VSOUTPUT input)
{
	PSOUTPUT ans;

	ans.colour = float4(1,1,1,1);

	//
	// Sample textures.
	//

	half4 alignment				= tex2D(sampler_terrain_alignment,	input.uv_terrain		);
	half4 normal				= tex2D(sampler_terrain_normal,		input.uv_terrain		);
	half4 cobble_pattern		= tex2D(sampler_cobble_pattern,		input.uv_cobble_pattern	);
	half4 cobble_normal			= tex2D(sampler_cobble_normal,		input.uv_cobble_pattern	);
	half4 grout					= tex2D(sampler_grout,				input.uv_mud_grout		);
	float4 group				= tex2D(sampler_group,				input.uv_group			);
	half4 mud					= tex2D(sampler_mud,				input.uv_mud_grout		);
	half4 horizon_map			= tex2D(sampler_horizon,			input.uv_terrain		);

	half4 cobble_diffuse_low	= tex2D(sampler_cobble_diffuse,		input.uv_cobble_diffuse + half2(cobble_pattern.b,cobble_pattern.b)*half2(12.78,23.14));
	half4 cobble_diffuse_hi		= tex2D(sampler_cobble_diffuse,		3.14 * (input.uv_cobble_pattern + 20 * half2(cobble_pattern.b,cobble_pattern.b)));
	half4 cobble_diffuse		= cobble_diffuse_low + (cobble_diffuse_hi - 0.5) * (cobble_pattern.b);

	//
	// Find lighting from the perspective shadow map.
	//

	half2 pts_uv = xformCamSpaceToPerspectiveTextureSpace(input.shadow_tex_coord_max_alpha.xy);

	half4 lightshadowfactor = tex2D(sampler_shadow_tex, pts_uv);

	//
	// We have to sample the group from a different position to enable cobbles and gravel.
	//

	half2 cobble_enable_uv = wrap_coord(input.uv_cobble_pattern, floor(input.uv_cobble_pattern) + cobble_pattern.rg);

	float2 cobble_enable_uv_in_group_space		= (cobble_enable_uv - cobble_pattern_to_group_uv.xy) * (float2) cobble_pattern_to_group_uv.zw;
	float  cobble_enable							= tex2D(sampler_group, cobble_enable_uv_in_group_space).b;

	ans.colour.rgb = mud;
	ans.colour.a   = saturate((group.r - MUD_WIDTH) * MUD_FADE) * input.shadow_tex_coord_max_alpha.z;
	
	//
	// No cobbles if cobble enable < 0.3...
	//
	
	float cobble_alpha = (cobble_enable - COBBLE_EXTENT >= 0) ? cobble_normal.a : 0;

	//
	// Blend in cobbles.
	//
	
	ans.colour.rgb = lerp(ans.colour.rgb, cobble_diffuse, cobble_alpha);
	ans.colour.a   = max(cobble_alpha, ans.colour.a);

	/*
	//
	// Cobble colour.
	//

	ans.colour.rgb = cobble_diffuse;
	ans.colour.a   = cobble_normal.a;
	*/

	//
	// How much grout here?
	//

	float grout_amount = (1-cobble_normal.a) * saturate((cobble_enable - GROUT_WIDTH) * 10);

	//
	// Add in unaligned grout.
	//
	
	ans.colour.rgb = lerp(ans.colour.rgb,grout.rgb, saturate(grout_amount));
	//ans.colour.a   = max(grout_amount, ans.colour.a);

	//
	// Align it.
	// 

	ans.colour.rgb = saturate_desaturate(ans.colour.rgb, alignment.r);
	
	//
	// Proper normal...
	//
	
	half3 actual_cobble_normal = 2 * cobble_normal.xzy - 1;
	half3 the_normal           = lerp(half3(0,1,0), actual_cobble_normal, cobble_alpha);
	
	//
	// From the horizon map.
	//

	half sunfactor = saturate((ambient_norm_sun_angle.a - horizon_map.b)* 16.0);
	
	//
	// Now light.
	//

	half3 lighting = lighting_for_normal(the_normal, lightshadowfactor.a, sunfactor, group.a);
	
	lighting      += lightshadowfactor.rgb;
	ans.colour.rgb = ans.colour * lighting;
	
	//
	// Change max alpha.
	//
	
	ans.colour.a *= input.shadow_tex_coord_max_alpha.w;
	
	//0.9f * saturate(input.shadow_tex_coord_max_alpha.z * 1.4);

	return ans;
}



// ================================================================================================
// 
// 1.1 version.
// 
// ================================================================================================

struct VSOUTPUT_LOWEND
{
	float4	position	:	POSITION;
	float2	uv_group	:	TEXCOORD0;
	float2	uv_mud		:	TEXCOORD1;
	float2	uv_cobbles	:	TEXCOORD2;
	
};

VSOUTPUT_LOWEND vs_main_lowend(VSINPUT input)
{
	VSOUTPUT_LOWEND ans;

	//
	// The middle of the terrain... to maintain accuracy in uv mapping.
	//
	
	const float2 terrain_middle = float2(1024 * 2.5 / 2, 1024 * 2.5 / 2);

	ans.position   = mul(input.position,ProjectionMatrix);
	ans.uv_group   = (input.position.xz - GroupUVOriginScale.xy) * GroupUVOriginScale.zw;
	ans.uv_mud     = (input.position.xz - terrain_middle) * Tiling.x;
	ans.uv_cobbles = (input.position.xz - terrain_middle) * Tiling.x;

	return ans;
};

//
// Low-end samplers.
//

sampler sampler_lowend_group		: register(s0);
sampler sampler_lowend_mud			: register(s1);
sampler sampler_lowend_cobbles		: register(s2);

PSOUTPUT ps_main_lowend(VSOUTPUT_LOWEND input)
{
      PSOUTPUT ans;
 

      float4 group            = tex2D(sampler_lowend_group,       input.uv_group          );
      float4 mud              = tex2D(sampler_lowend_mud,         input.uv_mud            );
      float4 cobbles          = tex2D(sampler_lowend_cobbles,     input.uv_cobbles        );

      float alpha_for_mud     = saturate((group.r-0.2)*4);
      float alpha_for_cobbles = saturate((group.b-0.3)*4);

      ans.colour = lerp(mud,cobbles,alpha_for_cobbles);     
      ans.colour.a  *= alpha_for_mud;

      return ans;
};

