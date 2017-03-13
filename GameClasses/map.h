#ifndef MAP_H
#define MAP_H

#include "wall.h"

class Wall;

class Map
{


public:
    QVector <Wall> walls;
    Map();
    void addWall(Wall w);
    void draw(GameWidget *obg);
};

#endif // MAP_H