// ========================================================
//
// VERTEX SHADER
//
// ========================================================

float4x4 ProjectionMatrix	: register(c0);
float4   DecayConstants		: register(c4);
float4   TextureParams		: register(c5);

struct VSINPUT
{
	float4 position : POSITION;
};

struct VSOUTPUT
{
	float4 position				: POSITION;
	float2 uv_state				: TEXCOORD0;
	float2 uv_oil				: TEXCOORD1;
	float2 uv_bubble			: TEXCOORD2;
};

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
	// Calculate uvs.
	//

	ans.uv_state  = (input.position.xz - TextureParams.xy) * TextureParams.zw;
	ans.uv_oil    = (input.position.xz - terrain_middle  ) * DecayConstants.x;
	ans.uv_bubble = (input.position.xz - terrain_middle  ) * DecayConstants.y;
	
	return ans;
}


// ========================================================
//
// PIXEL SHADER
//
// ========================================================

float4	PixelShaderParams			: register(c0);
float4  OilMapping					: register(c1);
float4  OilStartColourA				: register(c2);
float4  OilStartColourB				: register(c3);
float4  OilEndColourA				: register(c4);
float4  OilEndColourB				: register(c5);

sampler	sampler_oil					: register(s0);
sampler	sampler_bubble				: register(s1);
sampler	sampler_state_a				: register(s2);
sampler	sampler_state_b				: register(s3);

struct PSOUTPUT
{
	float4 colour : COLOR;
};

PSOUTPUT ps_main(VSOUTPUT input)
{
	PSOUTPUT ans;

	float4 state_a = tex2D(sampler_state_a, input.uv_state);
	float4 state_b = tex2D(sampler_state_b, input.uv_state);
	float4 state   = lerp(state_a,state_b,PixelShaderParams.x);
	
	//
	// Unbaised state uv.
	//
	
	float2 state_uv = state.rg - 0.5;
	
	//
	// Reduce uv depending on state.
	//
	
	//state_uv *= saturate(min(state.a * 5, 1.6 - state.a * (.6/.2)));
	
	//
	// Work out oil uvs.
	//
	
	float2 oil_uv_a = input.uv_oil + state_uv * OilMapping.x;
	float2 oil_uv_b = input.uv_oil + state_uv * OilMapping.z;
	
	//
	// Sample oil textures.
	//
	
	float4 oil_a = tex2D(sampler_oil, oil_uv_a);
	float4 oil_b = tex2D(sampler_oil, oil_uv_b);
	
	//
	// And combine.
	//
	
	float4 oil = oil_a * OilMapping.y + oil_b * OilMapping.w;
	
	//
	// Now find our two colours.
	//
	
	float3 colour_a = OilStartColourA.rgb;//lerp(OilStartColourA.rgb, OilEndColourA.rgb, saturate(2.0 * state.a - 0.3));
	float3 colour_b = OilStartColourB.rgb;//lerp(OilStartColourB.rgb, OilEndColourB.rgb, saturate(2.0 * state.a - 0.3));

	//
	// Final oil colour.
	// 
	
	float3 oil_colour = lerp(colour_a, colour_b, oil.a);
	
	//
	// Light the normal.
	//
	
	float lighting = state.a * abs(dot(normalize(oil.xyz - 0.5), float3(0.6,0.7,0.5)));
	
	//
	// Final colour.
	//
	
	float4 final_colour;
	
	final_colour.rgb = oil_colour;
	final_colour.a   = ((state.a - 0.0625) < 0) ? 0 : 0.5;
	
	if (lighting > .35)
	{
		final_colour = float4(0.0,(lighting-.55)*4,0,1);

		if (lighting > .65 && lighting < 0.72)
		{
			final_colour = float4(0.5,0,0,1);
		}
	}

	ans.colour = final_colour;
	
	return ans;
}
