vs.1.1

// Our constants.

// c0-c4	Combined view/projection matrix
// c5		(255,1,8,0.5)
// c6		(dx,0, dz), 0
// c7		u multiplier, v multiplier, v offset, height offset
// c8		Quadplane (originx,originy,originz),alpha
// c9		Quadplane hieght control points
// c10		cam z.x, 0.0F, cam z.z, scale for y bending.
// c11		cam position


// Our inputs.

dcl_color0 v0		// u,v, constant, alpha
dcl_color1 v1		// spline constants


// Find the constant for this point
mad		r1.x,	v0.z,	c5.x,	c5.w
mov		a0.x,	r1.x

// What's the height of the ground at this spot?
dp4		r1.x,	v1,		c9

// Find top position into r0
mov		r0,		c[a0.x]
mad		r0,		c6,		v0.x,	r0
mov		r0.w,	c5.y

// What's the point we should be at when v = 1?
add		r1.y,	r0.y,	c7.w

// Not below ground!
max		r1.y,	r1.y,	r1.x

// Now find y coord.
sub		r1.z,	r1.y,	r0.y
mul		r1.z,	r1.z,	v0.y
add		r0.y,	r0.y,	r1.z

// Find texture coords.
mul		r1.x,	c7.x,	v0.x
mad		r1.y,	r0.y,	c7.y,	c7.z

/*
// Bend the quad towards the camera.
sub		r3,		c11,	r0
mul		r3.y,	r3.y,	r3.y
mul		r3.y,	r3.y,	c10.w
mad		r0.xyz,	c10,	r3.y,	r0
*/

/*
// Find colour
mov		r2,		c5.y
mov		r2.a,	c8.a
//mul		r2.a,	c[a0.x].a,	v0.w
*/

// Output clipspace position
dp4		oPos.x,	r0,	c0
dp4		oPos.y,	r0,	c1
dp4		oPos.z,	r0,	c2
dp4		oPos.w,	r0,	c3

// Output texture coords
mov		oT0.xy,	v0
mov		oT1.xy,	r1.xy

// Output colour
//mov		oD0,	r2

