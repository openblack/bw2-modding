vs.1.1

// Vertex declarations.

dcl_position  v0

// c0-3 = projection transform
// c4	= uv generating parameters.

def c5,	0.05, 0.00, 0.00, 0.00

// Transform position into clip space.

dp4 oPos.x, v0, c0
dp4 oPos.y, v0, c1
dp4 oPos.z, v0, c2
dp4 oPos.w, v0, c3

// Calculate state texture coords.

sub r0, v0.xz, c4
mul r0, r0,    c4.z

// Calculate world texture coords for hot/cold
mul r1, v0.xz, c5.x

// Output texture coords

mov oT0.xy, r0.xy
mov oT1.xy, r0.xy
mov oT2.xy, r1.xy
mov oT3.xy, r1.xy
