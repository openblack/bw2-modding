vs.1.1

dcl_position v0 // x,y,z
dcl_color0   v1	// r,g,b,a are (dx,dy,dz), phase.
dcl_color1   v2 // u,v,rot,strength

// c4 is (phasemultiplier,2,-1,time)
// c8 is camera x vector
// c9 is camera y vector

def		c10,	1.05,	4.6,	 12.0,	0.25
def		c11,	0.5,	3.0,	 32.0,	0.1		// c11.y is movement distance, c11.z is sprite size
def		c12,	4.0,	0.25,	 0.0,	5.5		// c12.w is texture anim speed

// Find time and 1.05-time into r2.xy
mad		r2.x,	c4.x,	v1.w,	c4.w
sub		r2.y,	c10.x,	r2.x

// From 0 to 1
frc		r2.xy,	r2

// Find alpha into r2.y.  Get the nice shape as x^5-x^6
mul		r2.z,	r2.y,	r2.y
mul		r2.z,	r2.z,	r2.z	// Power 4
mul		r2.w,	r2.z,	r2.y	// Power 5
sub		r2.y,	r2.z,	r2.w
mul		r2.y,	r2.y,	c10.z
mul		r2.y,	r2.y,	v2.w
sub		r2.y,	r2.y,	c11.w

// Convert uv from (0 to 1) to (-1 to +1)
mad		r0,		v2,		c4.y,	c4.z

// Rotspeed from (0 to 1) to (-1 to +1)
mad		r3.z,	v2.z,	c4.y,	c4.z

// Find Sin/Cos of time into r3.xy
mad		r3.x,	c4.x,	v1.w,	c4.w
mul		r3.x,	r3.x,	r3.z
add		r3.y,	r3.x,	c10.w
frc		r3.xy,	r3.xy
mad		r3,		r3.xy,	c4.y,	c4.z
mul		r4,		r3,		r3
mul		r4,		r4,		r3
sub		r3,		r3,		r4
mul		r3,		r3,		c11.z

// Find x-vector into r4
mul		r4,		c8,		r3.x
mad		r4,		c9,		r3.y,	r4

// Find y-vector into r5
mul		r5,		c8,		r3.y
mul		r6,		c9,		r3.x
sub		r5,		r6,		r5

// Find middle into r1
mad		r1,		v1,		c4.y,	c4.z
mul		r1,		r1,		c11.y
mad		r1,		r1,		r2.x,	v0

// Find world space position into r1
mad		r1,		r4,		r0.x,	r1
mad		r1,		r5,		r0.y,	r1
mov		r1.w,	v0.w			// 1 in w...

// Output clipspace position.
dp4		oPos.x,	r1,		c0
dp4		oPos.y,	r1,		c1
dp4		oPos.z,	r1,		c2
dp4		oPos.w,	r1,		c3

// Output texture coords
mov		oT0.xy, v2.xy

// Output colour
mov		r2.w,	r2.y
mov		r2.xyz,	v0.w
mov		oD0,	r2

