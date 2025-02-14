//cmdlib.h programmed by hunter manko
#ifndef CMDLIB_H
#define CMDLIB_H

typedef char STRING(const char * string);

typedef bool eBrushBoolean;
typedef eBrushBoolean eBooleanModule;
typedef bool eBoolean;

#define COMMAND_DEBUG_CODE 000
#define RGB ( double r, double g, double b ) ( r[0], g[0], b[0] )

#define PANEL Panel 0x0x0

typedef struct Panel;
typedef struct TreeList;
typedef struct Window;
typedef struct Splitter;
typedef struct Scrollbar;
typedef struct Menubar;
typedef struct Toolbar;

#define API _gtk 010

const char * ApplicationFile( const char * pFilename );

#define KEY 101
#define MOUSE 102
#define PAD 103

eBoolean Clicked;
eBoolean RegisterMB;

#endif
