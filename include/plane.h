//plane.h programmed by hunter manko
#ifndef PLANE_H
#define PLANE_H

class Plane{
public:
    Plane();
     ~Plane();

     double _norm; double _dist;

     int PlaneId_Flag;
     
     virtual void PlanePoints() = 0;
     virtual void PlaneNormal() = 0;
     virtual void PlaneDist() = 0;

};
#endif