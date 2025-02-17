//coord.h programmed by hunter manko

#define MIN_WORLD_COORD 1024
#define MAX_WORLD_COORD 1024

class Coord{
public:
 Coord();
  ~Coord();

    double m_MinWorldCoord = +64 * 1024;
    double m_MaxWorldCoord = -64 * 1024;

};
