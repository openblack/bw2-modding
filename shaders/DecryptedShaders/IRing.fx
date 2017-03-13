// ========================================================
//
// VERTEX SHADER
//
// ========================================================

float4x4 ProjectionMatrix	: register(c0);
float4   Parameters			: register(c4);
float4	 TopColour			: register(c5);
float4   CameraPos			: register(c6);
float4   HandPos			: register(c7);
float4   BoneArray[16]		: register(c16);	// For the iring.
float4   ControlPoint[6]	: register(c16);	// For the strands

struct VSINPUT
{
	float4 position	: COLOR0;
	float4 normal	: COLOR1;
};

struct VSOUTPUT
{
	float4 position		: POSITION;
	float2 uv			: TEXCOORD0;
	float4 colour		: COLOR0;
};

VSOUTPUT vs_iring(VSINPUT input)
{
	VSOUTPUT ans;

	//
	// Constants
	//

	float MAX_HEIGHT	= Parameters.x;
	float TIME			= Parameters.y;

	//
	// This is our input...
	//
	
	float bone_index		= input.position.x * 256.0;
	float bone_interpolant	= input.position.y;
	float height			= input.position.z;
	float normal_x			= input.normal.x - 0.5;
	float normal_y			= input.normal.y * 2 - 1;
	float layer				= input.normal.w * 256.0;

	//
	// Find the positions between which this vertex lies.
	//

	float4 bone_pos_a = BoneArray[bone_index + 0];
	float4 bone_pos_b = BoneArray[bone_index + 1];

	//
	// Find world space position of the vert.
	//

	float4 world_pos;
	
	world_pos    = lerp(bone_pos_a, bone_pos_b, bone_interpolant);
	world_pos.y += height * MAX_HEIGHT;
	world_pos.w  = 1.0;

	/*
	//
	// Push towards hand pos.
	//
	
	float3 hand_delta = world_pos - HandPos.xyz;

	const float PUSH_RADIUS = 10.0F;
	const float PUSH_START  = 5.0F;

	float  push_dist;
	
	push_dist  = 1 - saturate((dot(hand_delta,hand_delta) - PUSH_START*PUSH_START) * (1.0F / (PUSH_RADIUS * PUSH_RADIUS)));
	push_dist *= push_dist;

	world_pos.xyz -= normalize(hand_delta) * push_dist;	
	*/
	
	//
	// Find output position.
	//
	
	ans.position = mul(world_pos,ProjectionMatrix);
	
	//
	// What's the normal?
	//
	
	float3 normal;
	 
	normal    = (bone_pos_b - bone_pos_a).xyz * normal_x;
	normal.y += normal_y;
	normal    = normalize(normal);
	
	//
	// Fade out depending on normal.
	//
	
	float3 cam_delta	= normalize(world_pos - CameraPos.xyz);
	float  dprod		= dot(cam_delta, normal);
	float  fade			= 1 - saturate(abs(dprod) * (2 - layer));		// High value is invisible.

	
	//
	// Calculate uvs.
	//

	float4 terrain_colour = BoneArray[bone_index + 2];

	ans.uv.x = 1.00F * terrain_colour.w + TIME * (0.02 + layer * 0.05);
	ans.uv.y = 0.05F * world_pos.y + 1.25F * height + TIME * (-0.05 + layer * 0.07);

	//
	// And colour.
	//
	
	float  val    = 4 * (height - 0.5) * (height - 0.5);
	float  alpha  = val*val + fade + saturate((height-0.5));// + (1 - layer);			// High alpha is invisible.
	float4 colour = lerp(terrain_colour, TopColour, height) * 0.5;
	
	ans.colour = float4(colour.rgb, alpha);
	
	return ans;
}

VSOUTPUT vs_strand(VSINPUT input)
{
	VSOUTPUT ans;

	//
	// This is our input...
	//

	float3 pos = input.position.xyz;
	float3 dir = input.normal   * 2 - 1;

	float dx = input.position.w * 2 - 1;
	float dy = input.normal  .w * 2 - 1;

	float TIME = Parameters.y;

	//
	// Work out position and direction of the spline here.
	//
	
	float4 spline_pos;
	float4 spline_dir;
	
	spline_pos  = ControlPoint[0] * pos.x;
	spline_pos += ControlPoint[2] * pos.y;
	spline_pos += ControlPoint[4] * pos.z;

	spline_dir  = ControlPoint[0] * dir.x;
	spline_dir += ControlPoint[2] * dir.y;
	spline_dir += ControlPoint[4] * dir.z;

	float4 uvalpha;

	uvalpha  = ControlPoint[1] * pos.x;
	uvalpha += ControlPoint[3] * pos.y;
	uvalpha += ControlPoint[5] * pos.z;

	//
	// Work out normal and position of our point.
	//

	const float STRAND_RADIUS = 1.7;

	float3 x_vec = normalize(cross(spline_dir.xyz, float3(0,1,0)));
	float3 y_vec = normalize(cross(spline_dir.xyz, x_vec));

	float3 world_normal = dx * x_vec + dy * y_vec;
	float4 world_pos    = float4(spline_pos.xyz + world_normal.xyz * STRAND_RADIUS, 1);

	//
	// Fade out depending on normal.
	//
	
	float3 cam_delta	= normalize(world_pos - CameraPos.xyz);
	float  dprod		= dot(cam_delta, world_normal);
	float  fade			= 1 - saturate(abs(dprod));		// High value is invisible.

	//
	// Fade out at start and end.
	//
	
	float start_fade = pos.x*pos.x*pos.x*pos.x*pos.x*pos.x;
	float end_fade   = pos.z*pos.z*pos.z*pos.z*pos.z*pos.z;

	//
	// Work out world space pos.
	//
	
	ans.position = mul(world_pos,ProjectionMatrix);
	ans.colour   = float4(TopColour.rgb,uvalpha.a*0.9+fade*0.3+start_fade+end_fade);
	ans.uv.x     = uvalpha.x * 1;
	ans.uv.y	 = 1.25F * dy + TIME * 0.05;
	
	return ans;
}






