// ========================================================
//
// VERTEX SHADER FOR THE CHAIN
//
// ========================================================

vs.1.1


// Inputs

dcl_position v0
dcl_normal   v1
dcl_texcoord v2

// Find object space pos into r1. c11.x is collar radius.
mul r1,	  v0, c11.x
mov r1.w, v0.w

// Find world space position into r0
dp4 r0.x, r1, c8
dp4 r0.y, r1, c9
dp4 r0.z, r1, c10
mov r0.w, v0.w

// Find world space normal into r1
dp3 r1.x, v1, c8
dp3 r1.y, v1, c9
dp3 r1.z, v1, c10
mov r1.w, v0.w

// Find reflection vector into r2
sub r3,   r0,	c7
dp3 r3.w, r3,	r1
mul r4,   r3.w, r1
sub r3,   r3,   r4
sub r3,   r3,   r4
dp3 r3.w, r3,   r3
rsq r3.w, r3.w
mul r2,   r3,   r3.w

// Diffuse lighting into r3
dp3 r3.w, r1,	c5		// Amount of sun
max r3.w, r3.w, c4.w	// c4.w = 0
mul r3,   r3.w, c4		// Sun colour
add r3,   r3,	c6		// Ambient

// Specular lighting into r4
dp3 r4.w, r2,	c5
max r4.w, r4.w, c4.w	// c4.w = 0
mul r4.w, r4.w, r4.w
mul r4,   c4,   r4.w

// Project point
dp4 oPos.x, r0, c0
dp4 oPos.y, r0, c1
dp4 oPos.z, r0, c2
dp4 oPos.w, r0, c3

// Output uvs
mov oT0.xy, v2.xy
mov oT1.xy, v2.xy

// Output colours
mov oD0, r3
mov oD1, r4
