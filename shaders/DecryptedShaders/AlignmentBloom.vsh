vs.2.0

def	c8,	2.0, -1.0, 0.5, 1.0

dcl_texcoord0 v0

// Output clipspace position.

mov r0,   c8
mad r0.x, v0.x,  c8.x,  c8.y
mad r0.y, v0.y, -c8.x, -c8.y

mov oPos, r0

// Output texcoords.

mov oT0.xyzw, v0
