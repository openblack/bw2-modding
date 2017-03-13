// ========================================================
//
// VERTEX SHADER
//
// ========================================================

float4x4 ProjectionMatrix	: register(c0);
float4   WorldPosition      : register(c4);
float4   TimeHeightScale    : register(c5);
float4   VertexHeights[4]	: register(c6);

struct VSINPUT
{
	float4 route_x: TEXCOORD0;
	float4 route_z: TEXCOORD1;
	float4 params : TEXCOORD2;
};

struct VSOUTPUT
{
	float4 position		: POSITION;
	float2 uv			: TEXCOORD0;
};

VSOUTPUT ant_vs(VSINPUT input)
{
	VSOUTPUT ans;
	
	//
	// What's the time?
	//
	
	float thetime = TimeHeightScale.x + input.params.b;
	
	//
	// Find the line we're moving along.
	//
	
	float t     = frac(thetime) * 4;
	float line  = floor(t);
	float along = frac(t);
	
	float4 select_start = saturate(1 - abs(float4(0,1,2,3) - line));
	float4 select_end   = saturate(1 - abs(float4(3,0,1,2) - line));
	
	float2 start;
	float2 end;
	
	start.x = dot(select_start, input.route_x);
	start.y = dot(select_start, input.route_z);
	
	end.x = dot(select_end, input.route_x);
	end.y = dot(select_end, input.route_z);
	
	//
	// Convert to world space.
	//
	
	start = start * WorldPosition.zw + WorldPosition.xy;
	end   = end   * WorldPosition.zw + WorldPosition.xy;
	
	//
	// Find the direction along the line and to the left of the line.
	//
	
	float2 dir  = normalize(start - end);
	float2 left = float2(dir.y,-dir.x);

	//
	// Piss aruond with along... to make the ant stop and start.
	//
	
	float jitter;
	
	jitter = frac(along * 2 + 0.5) - 0.5;
	along  = along - 0.5*jitter*jitter;
	
	//
	// Find the world x/z of the middle of the ant.
	//
	
	float2 world_mid;
	
	world_mid = start + along * (end - start);
	
	//
	// Include offset due to (u,v) pos.
	//
	
	float2 world_ant_vert;
	
	world_ant_vert  = world_mid;
	world_ant_vert += (input.params.x - 0.5) * 0.10 * dir;
	world_ant_vert += (input.params.y - 0.5) * 0.10 * left;
	
	//
	// Find the terrain y-coord here.
	//
	
	float2 rel_ant_vert = (world_ant_vert - WorldPosition.xy) * TimeHeightScale.z;
	
	float2 vertex_index = floor(rel_ant_vert);			// This is (0,0) - (2,2) depening on which quad we are in.
	float2 vertex_along = rel_ant_vert - vertex_index;	// This is the position inside the quad.

	float4 quad_top_row = VertexHeights[vertex_index.y    ];
	float4 quad_bot_row	= VertexHeights[vertex_index.y + 1];
	
	float4 select_left  = saturate(1 - abs(float4(0,1,2,9) - vertex_index.x));
	float4 select_right = saturate(1 - abs(float4(9,0,1,2) - vertex_index.x));
	
	//
	// Pack the four height of the quad into one value.
	//
	
	float4 quad_height;
	
	quad_height.x = dot(select_left,  quad_top_row);
	quad_height.y = dot(select_right, quad_top_row);

	quad_height.z = dot(select_left,  quad_bot_row);
	quad_height.w = dot(select_right, quad_bot_row);
	
	//
	// Change the quad depending on the split.
	//
	
	if (frac((vertex_index.x + vertex_index.y) * 0.5) < 0.1)
	{
		//
		// vertex.x + vertex.y is even.
		//
		
		quad_height    = quad_height.yxwz;
		vertex_along.x = 1 - vertex_along.x;
	}
	
	//
	// Which triangle of the quad are we in?
	//
	
	float3 triangle_height;
	float2 triangle_along;
	
	if (vertex_along.x + vertex_along.y <= 0.5)
	{
		triangle_height = quad_height.xyz;
		triangle_along  = vertex_along;
	}
	else
	{
		triangle_height = quad_height.wzy;
		triangle_along  = 1 - vertex_along;
	}
	
	//
	// Now interpolate inside the triangle.
	//
	
	float world_ant_y;
	
	world_ant_y  = triangle_height.x;
	world_ant_y += (triangle_height.y - triangle_height.x) * triangle_along.x;
	world_ant_y += (triangle_height.z - triangle_height.x) * triangle_along.y;
	
	//
	// Find y coord.
	//
	
	float world_ant_vert_y = world_ant_y + input.params.a * 0.02F;
	
	//
	// Find output position.
	//
	
	ans.position = mul(float4(world_ant_vert.x,world_ant_vert_y,world_ant_vert.y,1),ProjectionMatrix);
	
	//
	// Which frame of animation?
	//
	
	float frame = floor(frac(jitter * 500) * 2) * 0.5;
	
	//
	// Calculate uvs.
	//

	ans.uv.x = input.params.x;
	ans.uv.y = input.params.y * 0.5 + frame;
	
	return ans;
}

