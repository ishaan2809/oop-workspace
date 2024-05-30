#ifndef CHARACTER_H
#define CHARACTER_H
#include "Cell.h"
#include<tuple>
class Character: public Cell{
    public:
    Character(int x, int y) : Cell(x,y,'C'){}

    void move(int dx, int dy){
        int x = std::get<0>(position);
        int y = std::get<1>(position);
        x = x + dx;
        y = y + dy;
        position = std::make_tuple(x,y);
    }
};
#endif