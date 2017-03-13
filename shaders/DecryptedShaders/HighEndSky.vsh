vs.2.0

dcl_position  v0
dcl_color     v1
dcl_texcoord0 v2	// Clouds
dcl_texcoord1 v3	// Stars

// Move into world space.
add		r0,		v0,		c4

// Transform into camera space
dp4		oPos.x,	r0,		c0
dp4		oPos.y,	r0,		c1
dp4		oPos.z,	r0,		c2
dp4		oPos.w,	r0,		c3

// Ouput star uv coords
mov		oT0.xy,	v2.xy

// Output cloud uv coords
mov		r0,		v3
add		r0.x,	r0.x,	c8.x
mov		oT1.xy,	r0.xy

// Find moon coords.
sub		r0,		v0,		c5
dp3		r1.x,	r0,		c6
dp3		r1.y,	r0,		c7
mov		r1.z,	c9.x
dp3		r1.w,	v0,		c5

// Output moon coords.
mov		oT2.xyzw,	r1

// Output sky colour
mov		oD0,	v1
