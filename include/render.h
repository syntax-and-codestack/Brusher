//render.h programmed by hunter manko
#include <set>
#include "mathlib.h"

#ifndef RENDER_H
#define RENDER_H

namespace MainRender{

class Render{
 public:
   Render();
    Vec3 angle;
    Vec3 origin = { 0.0f, 0.0f, 0.0f };

    double r_DistanceClip;
    double MAX_DISTANCE_CLIP[1000];

    bool r_FakeLighting;
 };

};

#endif


