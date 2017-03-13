vs.1.1

// Our constants.

// c0-c4	Combined view/projection matrix
// c5		dist alpha multiplier, dist alpha origin, vertical alpha multiplier, vertical alpha origin
// c6		world volume origin, y_offset
// c7		2.0, -1.0, VOLUME_SIZE, 0.0
// c8		du vector
// c9		dv vector
// c10		Randomisation constants
// c11		colour origin
// c12		colour delta
// c13		camera position

// Our inputs.

dcl_position v0
dcl_texcoord v1

// Find unbiased uv coord into r1
mad		r1,		v1,		c7.x,	c7.y

// Find position in volume space into r0
mov		r0,		v0
sub		r0.y,	r0.y,	c6.w
frc		r0.y,	r0

// Position into world space.
mul		r0,		r0,		c7.z
add		r0,		r0,		c6
mad		r0,		c8,		r1.x,	r0
mad		r0,		c9,		r1.y,	r0
mov		r0.w,	v0.w

// Find colour
dp3		r2,		v0,		c10
frc		r2.y,	r2
mul		r3,		c12,	r2.y
add		r3,		c11,	r3

// Find alpha
sub		r4,		c13,	r0
dp3		r4.w,	r4,		r4
rsq		r4.w,	r4.w
rcp		r4.w,	r4.w
mad		r3.w,	r4.w,	c5.x,	c5.y
min		r3.w,	r3.w,	v0.w
mul		r3.w,	r3.w,	c7.w

// Output clipspace position.
dp4		oPos.x,	r0,		c0
dp4		oPos.y,	r0,		c1
dp4		oPos.z,	r0,		c2
dp4		oPos.w,	r0,		c3

// Output texture coords.
mov		oT0.xy,	v1

// Output colour
mov		oD0,	r3
