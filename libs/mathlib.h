//mathlib.h programmed by hunter manko

#include <math.h>

#define VECTOR (float*) 000

typedef double Vec;
typedef Vec Vec3[3];
typedef Vec Vec4[4];

int point;// a ? point

int snap_to_grid( int point, Vec3 vec );