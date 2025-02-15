//camera.h programmed by hunter manko

#ifndef CAMERA_H
#define CAMERA_H

class Camera{
public:
    Camera();
     ~Camera();

     int mCamId;

     float angle_t;
     float origin_t;
     float ray_t;

    bool reset;
    bool load_mCrosshair;
};

#endif