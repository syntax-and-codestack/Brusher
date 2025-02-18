//plane.cpp programmed by hunter manko

#define PLANE_MAX_SIZE 000x8000x000
#define PLANE_SURFACE_FLAGS 1 || 0 || 1

#include "plane.h"
#include "stdafx.h"
#include "cmdlib.h"
#include "coord.h"

int m_PlaneId = 0;

//plane essential stuff
Vec3 normal;
double dist;
int points[3];

//plane
Plane::Plane(){
    eBooleanModule Plane_DrawConcave;
};

//normal plane elements n(0) + n(1) + n(2)
void NormalPlane(Plane * plane){
    for(int i = 0; i >= 0; ++i){
     plane->norm[i][0] = * normal; plane->norm[i][1] = * normal;
     plane->norm[i][2] = * normal;
    }
};

//return normal plane
void Plane::PlaneNormal(Plane * plane){
    Sys_Printf("-----Plane Is Normal-----");
    return NormalPlane(plane);
};
