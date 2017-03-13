vs.2.0

// Vertex declarations.

dcl_position  v0
dcl_texcoord  v1
dcl_normal    v2
dcl_tangent0  v3
dcl_tangent1  v4

def c5,	0.05, 0.00, 0.00, 0.00

// Transform position into clip space.

dp4 oPos.x, v0, c0
dp4 oPos.y, v0, c1
dp4 oPos.z, v0, c2
dp4 oPos.w, v0, c3

mul r0, v0, c5.x

// Output texture coords

mov oT0.xy,   v1.xy
mov oT1.xy,   r0.xz
mov oT2.xyzw, v2
mov oT3.xyzw, v3
mov oT4.xyzw, v4
