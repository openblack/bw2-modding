vs.1.1

//	c0-c3			// transform
//	c4-c7			// spline constants
//	c8				// 2,-1,1,0
//  c9				// 1,1,0,0 - the curve for u coordinate offsetting
//  c10				// u_offset, v_offset, alpha, uv scale


dcl_color0 v0		// Spline control point constants
dcl_color1 v1		// (u,v), (dx,dz)

// Find point along the spline.
mul		r0,		c4,		v0.x
mad		r0,		c5,		v0.y,	r0
mad		r0,		c6,		v0.z,	r0
mad		r0,		c7,		v0.w,	r0

// Unbias (dx,dz)
mad		r1,		v1,		c8.x,	c8.y

// Include radius.
mad		r0.x,	v1.z,	r0.w,	r0.x
mad		r0.z,	v1.w,	r0.w,	r0.z

// Put 1 in w.
mov		r0.w,	c8.z

// Output position
dp4		oPos.x,	r0,		c0
dp4		oPos.y,	r0,		c1
dp4		oPos.z,	r0,		c2
dp4		oPos.w,	r0,		c3

// offset uv
dp4		r1.x,	v0,		c9
mad		r1.x,	r1.x,	c10.x,	v1.x
add		r1.y,	r1.y,	c10.y
mul		r1,		r1,		c10.w
mov		oT0.xy,	r1

// Output colour.
mov		r1,		c8.z
mov		r1.w,	c10.z
mov		oD0,	r1

