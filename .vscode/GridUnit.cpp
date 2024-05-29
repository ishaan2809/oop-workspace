#include "GridUnit.h"
#include <tuple>

GridUnit::GridUnit(int x, int y, char entity){
    this-> coordinates = std::make_tuple(x,y);
    this-> entity = entity;
}

std::tuple<int, int> GridUnit:: getCoordinates(){
    return coordinates;
}

char GridUnit::getEntity(){
    return entity;
}

 void GridUnit::setEntity(char entity){
    this->entity = entity;
 }

  void GridUnit::setCoordinates(int x, int y){
            coordinates = std::make_tuple(x,y);
        }
