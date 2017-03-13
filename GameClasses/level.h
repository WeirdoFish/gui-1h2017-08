#ifndef LEVEL_H
#define LEVEL_H

#include "map.h"

class Map;
class Player;

class Level
{
    Map *curr_map;
    Player * pl;
public:
    Level(Player * pl);
    void draw(GameWidget *obg);
    void checkCollision(QWidget *paint);
};

#endif // LEVEL_H