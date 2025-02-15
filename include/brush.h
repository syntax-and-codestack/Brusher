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

    double m_MaxBrushWorldCoord;
    double m_MinBrushWorldCoord;

    std::string BrushNameType; //static_cast<char>(BrushNameType);

    int m_WorldSignalBrush;
    int Brush_GroupType;
    int BrushId;

    void Brush_SetEpair(Brush * brush, const char * pKey, const char * pValue);

    void Brush_SignalMaxSize(Brush& brush){
        std::size_t g_nWorldBrushMax();
    };

    class Side{
        public:
        Side();
         ~Side();

         int side[6];

        enum{ 
            BrushTop = 0x0,
            BrushBottom = 0x1,
            BrushFront = 0x2,
            BrushBack = 0x3,
            BrushLeft = 0x4,
            BrushRight = 0x5
        }BrushSide;

        virtual void BrushSideTexture(Brush * brush, Side * side, const char * pTexture);

    };

    #define BRUSH_DEBUG_POINTS 000

 class _BrushQEData{
 public:
    _BrushQEData();
     ~_BrushQEData();
 };

};

#endif