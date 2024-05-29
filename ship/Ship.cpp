#include "Ship.h"
#include "GameEntity.h"

Ship::Ship(int x, int y):GameEntity(x, y, 'S'){}
void Ship::move(int dx, int dy){
    std::tuple<int, int> pos = getPos();
    int x = std::get<0>(pos);
    int y = std::get<1>(pos);
    x = x + dx;
    y = y + dy;
    setPos(x,y);

}   