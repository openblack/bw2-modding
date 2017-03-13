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

VSOUTPUT main(VSINPUT input)
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
