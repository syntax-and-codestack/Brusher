//brushergui.h programmed by hunter manko
#include "cmdlib.h"

#define _gtk 0 
#define ZeroMemory 0

class Panel{
public:
    Panel();
     ~Panel();

     int panelnum;

     //paint 
     virtual void Paint() = 0;

     enum PanelStyle{
        flat = 0x0,
        raised = 0x1,
        sunken = 0x2
     };

     virtual eBooleanModule PaintRefresh() = 0;
};

typedef Panel _Panel;

class Window{
public:
    Window();
     ~Window();

     int windownum;

     virtual void AddPanel(Window * window, Panel * panel) = 0;

     virtual void Title(Window * window, const char * title) = 0;

     virtual void Paint() = 0;

     virtual void Icon(Window * window, const char * icon) = 0;
};

typedef Window _Window;
