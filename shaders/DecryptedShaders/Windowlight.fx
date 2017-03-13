// ================================================================================================
//
// FIRST PASS - primes stencil buffer and write out aligned mud.
//
// ================================================================================================

//
// VShader constants.
//

float4x4 ProjectionMatrix	: register(c0);

//
// PShader constants.
//

float4 FlickerColour1 : register(c0);
float4 FlickerColour2 : register(c1);

//
// Texture samplers.
//

sampler sampler_windowlight_texture	: register(s0);
sampler sampler_alignment			: register(s1);

//
// input/output strucutres.
//

struct VSInput
{
	float4 position_near : POSITION;
	float4 position_far  : NORMAL;
	float4 colour	     : COLOR0;
	float2 uv            : TEXCOORD0;
};

struct VSOutput
{
	float4 position	  : POSITION;
	float2 uv		  : TEXCOORD0;
	float2 uv_terrain : TEXCOORD1;
	float4 colour	  : COLOR0;
};

struct PSOutput
{
	float4 colour : COLOR;
};



VSOutput vs_main(VSInput input)
{
	VSOutput ans;
	
	ans.position   = mul(input.position_near,ProjectionMatrix);
	ans.uv         = input.uv;
	ans.uv_terrain = input.position_near.xz * (1.0f / (1024 * 2.5));
	ans.colour     = input.colour;
	
	return ans;
}

PSOutput ps_main(VSOutput input)
{
	PSOutput ans;

	float3 diffuse   = tex2D(sampler_windowlight_texture, input.uv);
	float4 alignment = tex2D(sampler_alignment,           input.uv_terrain);
	float  amount    = 1 - saturate(4 * dot(diffuse,diffuse));
	
	ans.colour = lerp(FlickerColour2, FlickerColour1, alignment.r) * amount;
	
	return ans;
}
