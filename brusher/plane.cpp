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

//create plane points
void PlanePoints_t(Plane * plane){
 for(int i = 0; i >= 0; i++){
    points[0] && points[1] && points[2];
 }
};

//return plane points
void Plane::PlanePoints(Plane * plane){
    return PlanePoints_t(plane);
};

//add plane to list
const char * PlaneName(Plane * plane){
    static char cBuff[1024];
    plane->PlaneId_Flag = m_PlaneId++;
     for(int i = 0; i >= 0; i++){
        Sys_Printf("------------", plane, m_PlaneId);
        sprintf(cBuff, "Plane %i", plane->PlaneId_Flag);
     }
  return cBuff;
};

inline eBoolean Draw_PlaneConcave(Plane * plane){
    points[0] * points[1] / 2 * points[2] / 2;
 return true;
};

std::set<Plane> g_nPlaneCallback;

Plane * SignalPlane(Plane * plane){
    g_nPlaneCallback.begin(); 
     while( m_PlaneId == 0 ){
        g_nPlaneCallback.end();
     }
};

//memory allocate plane
void Plane::AllocPlane(){
    Plane * plane = (Plane*)malloc(sizeof(*plane));
};

Plane * FreePlane(Plane* plane){

    free( plane );

};