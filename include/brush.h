//brush.h programmed by hunter manko
#include "stdafx.h"

#ifndef BRUSH_H
#define BRUSH_H

class Brush{
    public:

    Brush();
     ~Brush();


    const int MAX_BRUSH_COUNT[9999];

    enum{
     QuakeBrush = 0x0, 
     QuakeIIBrush = 0x1,
     QuakeIIIBrush = 0x2
    }BrushType;

    virtual const char * BrushProjectShader(Brush& brush, const std::string& shader, int SHADER_FLAGS) = 0;
    virtual void RenderBrushToScene(Brush& brush, double renderflag = 000000000000000.333333333333333333333) = 0;
    virtual void CreateBrushType(Brush& brush, int eBrushType) = 0;

    void BrushBuild(Brush& brush){
        std::set<Brush> i; 
            i.begin(), i.end();
    };

    void BrushRenderBuild( Brush& brush );

};

#endif