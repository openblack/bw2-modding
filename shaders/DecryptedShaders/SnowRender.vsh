vs.1.1

// Our constants.

// c0-c4	Combined view/projection matrix
// c5		dist alpha multiplier, dist alpha origin, vertical alpha multiplier, vertical alpha origin
// c6		world volume origin, y offset
// c7		2.0, -1.0, 2.598, particle size in world space
// c8		yaw sin offset, pitch sin offset, yaw cos offset, pitch cos offset.
// c9		world volume size, left-right swoop speed, left-right swoop amount, upward swoop
// c10		Constants for randomising rotations
// c11		min snow amount, min snow y, 0.0F, 0.0F
// c12		Camera position
// c13		snow colour

// Our inputs.

dcl_position v0
dcl_texcoord v1

// Find yaw,pitch,yaw+.0.25,pitch+0.25 into r5
mul		r5,		v0,		c10
mad		r5,		v0,		c10.zwxy,	r5
mov		r5.zw,	r5.zwxy
add		r5,		r5,		c8

// Find sin(yaw),sin(pitch), cos(yaw),cos(pitch) into r0.xyzw
frc		r0.xy,	r5
frc		r1.xy,	r5.zwxy
mov		r0.zw,	r1.zwxy
mad		r0,		r0,		c7.x,	c7.y
mul		r1,		r0,		r0
mul		r1,		r1,		r0
sub		r0,		r0,		r1
mul		r0,		r0,		c7.z

// Create our rotating vectors into r1 and r2
mul		r1,		r0.x,	r0.y
mov		r1.y,	r0.w
mul		r1.z,  -r0.z,	r0.y

mul		r2,		r0.x,	r0.w
mov		r2.y,	r0.y
mul		r2.z,	r0.z,	r0.w

mul		r3,		r1.yzx,	r2.zxy
mul		r4,		r1.zxy,	r2.yzx
sub		r2,		r3,		r4

dp3		r3.x,	r1,		r1
dp3		r3.y,	r2,		r2
rsq		r3.z,	r3.x
rsq		r3.w,	r3.y
mul		r1,		r1,		r3.z
mul		r2,		r2,		r3.w

// Scale vectors
mul		r1,		r1,		c7.w
mul		r2,		r2,		c7.w

// Find our vector offsets from the uv coords into r3.
mad		r3,		v1,		c7.x,	c7.y

// Find volume space position of point into r4
mov		r4,		v0
sub		r4.y,	r4.y,	c6.w
frc		r4.y,	r4

// Find sin(yaw*Q),sin(pitch*Q) where Q is left-right swoop speed.
mul		r5,		r5,		c9.y
frc		r5.xy,	r5
mad		r5,		r5,		c7.x,	c7.y
mul		r6,		r5,		r5
mul		r6,		r6,		r5
sub		r5,		r5,		r6
mul		r5,		r5,		c7.z

// Now make swoop proportional to sin^4 and scale it.
mad		r4.y,	c9.w,	r5.x,	r4.y
mad		r4.y,	c9.w,	r5.y,	r4.y
mul		r5,		r5,		r5
mul		r5,		r5,		r5
mul		r5,		r5,		c9.z

// Find our world space point into r0
mul		r0,		r4,		c9.x
add		r0,		r0,		c6
mad		r0,		r1,		r3.x,	r0
mad		r0,		r2,		r3.y,	r0
add		r0.x,	r0.x,	r5.x
add		r0.z,	r0.z,	r5.y
mov		r0.w,	v0.w

// Fade out colour depending on distance from camera and output as specular.
sub		r1,		r0,		c12
dp3		r1,		r1,		r1
rsq		r1.x,	r1.x
rcp		r1.x,	r1.x
mad		r1,		r1.x,	c5.x,	c5.y
mul		r1,		r1,		c13
mov		oD1,	r1

// Find diffuse colour into r1
add		r5,		v0,		c6
mul		r5,		r5,		c10
dp3		r5.w,	r5,		c7.z
frc		r1.xy,	r5
frc		r5.xy,	r5.zw
mov		r1.z,	r5.x
mov		r1.w,	r5.y
add		r1,		r1,		c11.x

// Output clipspace position.
dp4		oPos.x,	r0,		c0
dp4		oPos.y,	r0,		c1
dp4		oPos.z,	r0,		c2
dp4		oPos.w,	r0,		c3

// Output texture coords.
mov		r2,		v1
dp3		r2.z,	v0,		c10
mov		oT0,	r2

// Output diffuse colour
mov		oD0,	r1








