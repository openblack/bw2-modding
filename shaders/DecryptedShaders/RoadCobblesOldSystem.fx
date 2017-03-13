// ========================================================
//
// VERTEX SHADER
//
// ========================================================

float4x4 ProjectionMatrix	: register(c0);
float2   CobbleTextureScale	: register(c4);

struct VSINPUT
{
	float4 position		: POSITION;
    float2 gravel_uv	: TEXCOORD0;
    float2 enable_uv	: TEXCOORD1;
};

struct VSOUTPUT
{
	float4 position		: POSITION;
	float2 cobble_uv_d	: TEXCOORD0;
	float2 cobble_uv_na	: TEXCOORD1;
	float2 enable_uv1	: TEXCOORD2;
	float2 enable_uv2	: TEXCOORD3;
	float2 alignment_uv	: TEXCOORD4;
	float3 world_pos    : TEXCOORD5;
};

VSOUTPUT vs_main(VSINPUT input)
{
	VSOUTPUT ans;
	
	//
	// Find output position.
	//
	
	ans.position = mul(input.position,ProjectionMatrix);
	
	//
	// Calculate uv mapping for cobbles.
	//
	
	ans.cobble_uv_na = (float2(input.position.x,input.position.z) - float2(2.5*512,2.5*512)) * CobbleTextureScale.x;
	ans.cobble_uv_d  = (float2(input.position.x,input.position.z) - float2(2.5*512,2.5*512)) * CobbleTextureScale.y;
	
	//
	// Output the enable uvs.
	//
	
	ans.enable_uv1 = input.enable_uv;
	ans.enable_uv2 = input.enable_uv + float2(0.5,0.0);
	
	//
	// Output alignment uv.
	//
	
	ans.alignment_uv = float2(input.position.x, input.position.z) * (1.0F / (1024.0F * 2.5F));
	
	//
	// Output position in world space for specular calculation.
	//
	
	ans.world_pos = input.position.xyz;
	
	return ans;
}

// ========================================================
//
// PIXEL SHADER
//
// ========================================================

float3	sun_colour					: register(c0);
float3	sun_direction				: register(c1);
float3	ambient						: register(c2);
float   norm_sun_angle				: register(c3);
float3  camera_position				: register(c4);

sampler	sampler_cobble_diffuse		: register(s0);
sampler	sampler_cobble_normal_alpha	: register(s1);
sampler	sampler_cobble_pattern		: register(s2);
sampler	sampler_cobble_enable		: register(s3);
sampler sampler_alignment			: register(s4);
sampler sampler_horizon_map			: register(s5);

struct PSOUTPUT
{
	float4 colour : COLOR;
};

#define USE_ALIGNMENT 0
#define USE_SHADOWS   0

PSOUTPUT ps_main(VSOUTPUT input)
{
	PSOUTPUT ans;

	//
	// Sample textures.
	//

	float4 cobble_normal_alpha = tex2D(sampler_cobble_normal_alpha,	input.cobble_uv_na);
	float4 cobble_pattern      = tex2D(sampler_cobble_pattern,		input.cobble_uv_na);
	float4 cobble_enable1      = tex2D(sampler_cobble_enable,		input.enable_uv1);
	float4 cobble_enable2      = tex2D(sampler_cobble_enable,		input.enable_uv2);
	float4 cobble_diffuse_low  = tex2D(sampler_cobble_diffuse,		input.cobble_uv_d  + float2(cobble_pattern.r,cobble_pattern.r)*float2(2.78,3.14));
	float4 cobble_diffuse_hi   = tex2D(sampler_cobble_diffuse,		3.14 * (input.cobble_uv_na + 20 * float2(cobble_pattern.r,cobble_pattern.r)));
	float4 horizon_map_value   = tex2D(sampler_horizon_map,			input.alignment_uv);

	#if USE_ALIGNMENT
	float4 alignment = tex2D(sampler_alignment, input.alignment_uv);
	#endif

	//
	// Find diffuse colour combining a low and high frequency lookup on the diffuse texture... and
	// blend colour towards gold depending on how good we are.
	//

	#if USE_ALIGNMENT
	float goodness = saturate(alignment.a * 2 - 1);
	#else
	const float goodness = 0.0F;
	#endif

	ans.colour = lerp(cobble_diffuse_low, float4(0.86, 0.72, 0, 0), goodness * 0.75) + (cobble_diffuse_hi - 0.5) * (cobble_pattern.r);

	//
	// Disable the cobble unless cobble_pattern.a == one of the colour channels
	// in cobble_enable1 or cobble_enable2.
	//

	float4 delta1 = (cobble_enable1 - cobble_pattern.r) * 1024;
	float4 delta2 = (cobble_enable2 - cobble_pattern.r) * 1024;
	float4 deltac = delta1 * delta2;
	float  rg     = deltac.r*deltac.g;
	float  ba     = deltac.b*deltac.a;
	float  rgba   = rg*ba;

	if (rgba == 0.0)
	{
		ans.colour.a = cobble_normal_alpha.a;
	}
	else
	{
		ans.colour.a = 0.0;
	}

	/*
	
	//
	// Unoptimised version of above...
	//
	
	if (cobble_enable1.r == cobble_pattern.r ||
		cobble_enable1.g == cobble_pattern.r ||
		cobble_enable1.b == cobble_pattern.r ||
		cobble_enable1.a == cobble_pattern.r ||
		cobble_enable2.r == cobble_pattern.r ||
		cobble_enable2.g == cobble_pattern.r ||
		cobble_enable2.b == cobble_pattern.r ||
		cobble_enable2.a == cobble_pattern.r)
	{
		ans.colour.a = cobble_normal_alpha.a;
	}
	else
	{
		ans.colour.a = 0.0F;
	}
	
	*/


	//
	// Find normal at this pixel.
	//

	float3 normal  = float3(cobble_normal_alpha.xzy) * 2 - 1;
	
	normal.x = -normal.x;
	normal.z = -normal.z;
	
	//
	// Find reflection vector.
	//
	
	float3 reflection_vector = normalize(reflect(input.world_pos - camera_position, normal));
	
	//
	// Lighting.
	//
	
	float  dprod_d = saturate(dot(normal,				sun_direction));
	float  dprod_s = saturate(dot(reflection_vector,	sun_direction));

	//
	// Diffuse occulsion term.
	//

	float  sun_factor = saturate((norm_sun_angle - horizon_map_value) * 16.0);	

	//
	// Occlude lighting.
	//
	
	dprod_d = dprod_d * sun_factor;
	
	//
	// Work out specular component.
	//

	#if USE_ALIGNMENT
	float  specular = (goodness * 0.5 + 0.1) * pow(dprod_s,16) * saturate(dprod_d * 16);
	#else
	const float specular = 0.0F;
	#endif

	//
	// Light the pixel.
	//
	
	ans.colour.rgb = ans.colour * (ambient + sun_colour * dprod_d) + (sun_colour * specular);

	//
	// Add shadow!
	//
	
	#if USE_SHADOWS
	float multiplier = saturate((ans.colour.a - 0.5) * 1024);
	ans.colour.rgb = ans.colour * multiplier;
	#endif
	
	return ans;
}


