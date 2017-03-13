vs.1.1

// Our inputs.

dcl_position0 v0		// Constants along each spline
dcl_position1 v1		// COnstants betwee the three splines, random value

// Our constants.
//
//	c0-c3	Projection Matrix
//	c4-c6	Control points 0
//	c7-c9	Control points 1
//	c10-c12	Control points 2
//	c13-c15	Control points 3
//  c16		4.0, point size, height_scale, spriral speed
//	c17		Diffuse colour
//	c18		2,-1,0.25,1
//  c19		attract position
//	c20		time
//

// Find the position along the three splines into (r0,r1,r2)
mul		r0,		v0.x,	c4
mad		r0,		v0.y,	c7,		r0
mad		r0,		v0.z,	c10,	r0
mad		r0,		v0.w,	c13,	r0

mul		r1,		v0.x,	c5
mad		r1,		v0.y,	c8,		r1
mad		r1,		v0.z,	c11,	r1
mad		r1,		v0.w,	c14,	r1

mul		r2,		v0.x,	c6
mad		r2,		v0.y,	c9,		r2
mad		r2,		v0.z,	c12,	r2
mad		r2,		v0.w,	c15,	r2

// Start value into r3
mul		r3,		v1.x,	r0
mad		r3,		v1.y,	r1,		r3
mad		r3,		v1.z,	r2,		r3

// Get animation value into r4.y
add		r4.y,	c20.x,	v1.w
frc		r4.y,	r4.y

// Get angle for rotation.
mul		r5,		r4.y,	c16.w
add		r5.x,	r5.y,	c18.z
frc		r5.xy,	r5						// angle,angle+.25 between 0-1
mad		r5,		r5,		c18.x,	c18.y	// Between -1 and +1

// Find sin/cos(angle) in r5.xy
mul		r6,		r5,		r5
mul		r6,		r6,		r5
sub		r5,		r5,		r6
add		r5,		r5,		r5
//mul		r5,		r5,		c18.z

// Move towards the attraction position by r4.x
rsq		r4.x,	r4.y
rcp		r4.x,	r4.x
sub		r6,		c19,	r3
sub		r6.y,	r6.y,	r6.y
dp3		r4.z,	r6,		r6
mul		r4.z,	r4.z,	c18.z
mul		r4.z,	r4.z,	c18.z
max		r4.z,	r4.z,	c18.z
rcp		r4.z,	r4.z
min		r4.z,	r4.z,	c18.w
mul		r4.x,	r4.x,	r4.z
mad		r3.xz,	r6,		r4.x,	r3

// And spiral upwards
mul		r5,		r5,		r4.z
add		r3.x,	r3.x,	r5.x
add		r3.y,	r4.y,	r3.y
add		r3.z,	r3.z,	r5.y

// Make sure position has 1.0 in w.
mov		r3.w,	c18.w

// Get alpha into r5.y,	r4.y-(r4.y)^2,  a curve going from 0 - 1/4 - 0
mul		r5.y,	r4.y,	r4.y
sub		r5.y,	r4.y,	r5.y

// Output size
dp4		r7.z,	r3,		c2
//rcp		r4.w,	r4.z
//mul		r7.z,	r7.z,	r4.z
rcp		r7.z,	r7.z
mul		oPts,	c16.y,	r7.z

// Output position.
dp4		oPos.x,	r3,		c0
dp4		oPos.y,	r3,		c1
dp4		oPos.z,	r3,		c2
dp4		oPos.w,	r3,		c3

// Encorporate alpha into diffuse.
mul		r4.z,	r4.z,	c16.x
mad		r5.z,	r4.z,	c18.x,	c18.w
mul		r5.y,	r5.z,	r5.y
mul		oD0,	r5.y,	c17


