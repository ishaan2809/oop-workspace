#ifndef AVATAR_H
#define AVATAR_H
#include "GridUnit.h"
#include <tuple>
class Avatar: public GridUnit{
    public:
     Avatar(int x, int y) : GridUnit(x,y,'A'){}
     void shift(int dx, int dy){
        int x = std::get<0>(coordinates) + dx;
        int y = std::get<1>(coordinates) + dy;
        coordinates = std::make_tuple(x,y);

     }

};
#endif