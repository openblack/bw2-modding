vs.1.1

dcl_position v0
dcl_color0   v1	// r,g,b,a are (u,v) strength, phase.

// c4 is (phasemultiplier,2,-1,time)

// c5 are the cubic constants for size
// c6 are the cubic constants for offset
// c7 are the cubic constants for alpha
// c8 is camera x vector
// c9 is camera y vector

def c10, 0.20, 1.0, 0.3,  0.1
def c11, 0.25, 8.0, 0.5,  0.7
def c12,2.0,  0.7, 0.0,  1.75


// Output clipspace position.
dp4		oPos.x,	v0,		c0
dp4		oPos.y,	v0,		c1
dp4		oPos.z,	v0,		c2
dp4		oPos.w,	v0,		c3

// Find angles into r2.y
mad		r0,		c4.x,	v1.w,	c4.w
add		r0.x,	r0.x,	c11.x
mov		r2,		r0
frc		r2.xy,	r0
add		r0,		r0,		c11.z
frc		r3.xy,	r0
mov		r2.z,	r3.x
mov		r2.w,	r3.y

// From (0 to 1) to (-1 to +1)
mad		r2,		r2,		c4.y,	c4.z

// r3 = r2^3
mul		r3,		r2,		r2
mul		r3,		r3,		r2

// r3 = a - a^3 = sin(angle)
sub		r3,		r2,		r3




// Animate texture coords
mov		r1,		v1
mul		r1.x,	r1.x,	c11.y		// x coord * 8
mad		r1.w,	r3.x,	c10.x,	c10.y
mul		r1.y,	r1.y,	r1.w
mad		r1.w,	r3.y,	c10.z,	c10.w
sub		r1.y,	r1.y,	r1.w
mov		oT0,	r1

// Output colour

mov		r5.w,	v0.w
sub		r0,		r5.w,	v1.y
mul		r0,		v1.z,	r0
sub		r0,		v0.w,	r0

mad		r1.w,	r3.z,	c12.x,	c12.y
sub		r0,		r0,		r1.w

sub		r1.w,	r5.w,	v1.z
add		r0,		r0,		r1.w
mad		r0,		v1.y,	c11.w,	r0

sub		r0.w,	c12.w,	v1.y

mov		oD0,	r0




// Animate texture coords
mov		r1,		v1
mul		r1.x,	r1.x,	c11.y		// x coord * 8
mad		r1.w,	r3.z,	c10.x,	c10.y
mul		r1.y,	r1.y,	r1.w
mad		r1.w,	r3.w,	c10.z,	c10.w
sub		r1.y,	r1.y,	r1.w
mov		oT1,	r1

// Output colour

mov		r5.w,	v0.w
sub		r0,		r5.w,	v1.y
mul		r0,		v1.z,	r0
sub		r0,		v0.w,	r0

mad		r1.w,	r3.y,	c12.x,	c12.y
sub		r0,		r0,		r1.w

sub		r1.w,	r5.w,	v1.z
add		r0,		r0,		r1.w
mad		r0,		v1.y,	c11.w,	r0


mov		oD1,	r0

