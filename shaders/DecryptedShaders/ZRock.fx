// ========================================================
//
// VERTEX SHADER
//
// ========================================================

float4x4 ProjectionMatrix	: register(c0);

struct VSINPUT
{
	float4 position : POSITION;
	float3 normal	: NORMAL;
	float4 colour	: COLOR;
};

struct VSOUTPUT
{
	float4 position	: POSITION;
	float3 uvw		: TEXCOORD0;
	float4 colour	: COLOR;
};

VSOUTPUT vs_main(VSINPUT input)
{
	VSOUTPUT ans;
	
	//
	// Find output position.
	//
	
	ans.position = mul(input.position,ProjectionMatrix);
	
	//
	// The middle of the terrain... to maintain accuracy in uvw mapping.
	//
	
	const float3 terrain_middle = float3(1024 * 2.5 / 2, 100, 1024 * 2.5 / 2);
	
	//
	// Calculate uvw.
	//

	ans.uvw = (input.position.xyz - terrain_middle) * 1.23;
	
	//
	// Light normal.
	//
	
	ans.colour  = float4(0.6 ,0.65,0.7, 0.0);
	ans.colour += float4(0.12,0.11,0.10,0.0) * saturate(dot(input.normal, float3( 0.3, 0.9, 0.3)));
	ans.colour += float4(0.1, 0.13,0.11,0.0) * saturate(dot(input.normal, float3( 0.9, 0.3,-0.3)));
	ans.colour += float4(0.1 ,0.11,0.1, 0.0) * saturate(dot(input.normal, float3(-0.3,-0.3, 0.9)));
	
	//
	// And modulate by colour.
	//
	
	ans.colour *= input.colour;
	
	return ans;
}


// ========================================================
//
// PIXEL SHADER
//
// ========================================================


sampler	sampler_diffuse	: register(s0);

struct PSOUTPUT
{
	float4 colour : COLOR;
};

PSOUTPUT ps_main(VSOUTPUT input)
{
	PSOUTPUT ans;

	float4 diffuse = tex3D(sampler_diffuse, input.uvw) * 0.5 + 0.5;
	
	ans.colour = diffuse * input.colour;
	
	return ans;
}

