vs.1.1

dcl_color0 v0		// control points in 'x'
dcl_color1 v1		// consrol points in 'y'
dcl_color2 v2		// dx,dz,height,bend
dcl_color3 v3		// x,z,u,v

//
// Constant allocation
//
//	c0-c3	Combined view/projection transform
//	c4		World space grid block dx
//	c5		World space grid block dz
//
//  c7		Ambient
//  c8		Light1 Direction
//	c9		Light1 Colour
//	c10		Light2 Direction
//	c11		Light2 Colour
//	c12		Grass texture uv scale
//	c13		1.0, 0.4,0.3,0.0		1.0F,height,scale,0.0
//	c14		2.0,-1.0,0.5,0.0		For unbiasing
//
//	c20		World space origin
//	c21-c24	Height control points
//	c25-c28	Grassiness control points
//  c29-c32	Normal x control points
//	c33-c36	Normal z control points
//  c37-c40 Sun shadow control points.
//

// Find world xz position.

mov		r0,		c20
mad		r0,		c4,		v3.x,	r0
mad		r0,		c5,		v3.y,	r0

// Convert to grass uv coordinates.

mul		r1.x,	r0.x,	c12.x
mul		r1.y,	r0.z,	c12.z
mov		oT1.xy,	r1

// Find height of the ground.

dp4		r1.x,	v0,		c21
dp4		r1.y,	v0,		c22
dp4		r1.z,	v0,		c23
dp4		r1.w,	v0,		c24
dp4		r0.y,	v1,		r1

// What's the height of the blade?
mul		r0.w,	v2.z,	c13.y
mul		r0.w,	r0.w,	c20.y

// Bendiness into r1.x

mul		r1.x,	c13.z,	v2.w

// Un-biased direction into r2

mad		r2,		v2,		c14.x,	c14.y

// Add on direction for bendiness.

mad		r0.x,	r2.x,	r1.x,	r0.x
mad		r0.z,	r2.y,	r1.x,	r0.z

// Find grassiness into r1

dp4		r1.x,	v0,		c25
dp4		r1.y,	v0,		c26
dp4		r1.z,	v0,		c27
dp4		r1.w,	v0,		c28
dp4		r1,		v1,		r1

// Find normal at ground into r4

dp4		r2.x,	v0,		c29
dp4		r2.y,	v0,		c30
dp4		r2.z,	v0,		c31
dp4		r2.w,	v0,		c32

dp4		r3.x,	v0,		c33
dp4		r3.y,	v0,		c34
dp4		r3.z,	v0,		c35
dp4		r3.w,	v0,		c36

mov		r4,		c13.w
dp4		r4.x,	v1,		r2
dp4		r4.z,	v1,		r3

// Find normal r4.y as 1-sqrt...

dp3		r4.y,	r4,		r4
rsq		r4.y,	r4.y
rcp		r4.y,	r4.y
sub		r4.y,	c13.x,	r4.y

// Add on height of blade vertex and put 1.0 into w.

mad		r0,		r0.w,	r4,		r0
//add		r0.y,	r0.y,	r0.w
mov		r0.w,	c13.x



// Find sun shadowyness into r5.x

dp4		r5.x,	v0,		c37
dp4		r5.y,	v0,		c38
dp4		r5.z,	v0,		c39
dp4		r5.w,	v0,		c40
dp4		r5.x,	v1,		r5

// Now light the normal.

dp3		r2.x,	r4,		c8
dp3		r2.y,	r4,		c10
//max		r2,		r2,		c13.w
mul		r2,		r2,		r5.x		// Include sun shadow
mov		r3,		c7
mad		r3,		r2.x,	c9,		r3
mad		r3,		r2.y,	c11,	r3
mul		r3,		r3,		c14.z

// Put height along blade into alpha.

mov		r3.a,	v2.z

// Output clip space pos.

dp4		oPos.x,	r0,		c0
dp4		oPos.y,	r0,		c1
dp4		oPos.z,	r0,		c2
dp4		oPos.w,	r0,		c3

// Output grass blade texture coords.

mov		oT0.xy,	v3.zw

// Output 

// Output colour

mov		oD0,	r3






