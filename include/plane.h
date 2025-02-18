//plane.h programmed by hunter manko
#ifndef PLANE_H
#define PLANE_H

#include "mathlib.h"

class Plane{
public:
    Plane();
     ~Plane();

     Vec3 * norm;
     double _dist;

     int PlaneId_Flag;
     
     virtual void PlanePoints() = 0;
     virtual void PlaneNormal(Plane * plane) = 0;
     virtual void PlaneDist() = 0;

     void PlaneTexture(Plane * plane, bool concave, const char * pTextureName);

};
#endif