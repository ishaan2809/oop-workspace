#include <iostream>
#include "GameEntity.h"
#include <tuple>

GameEntity::GameEntity(int x, int y, char type){
    this->position = std::make_tuple(x,y);
    this-> type = type;
}

std::tuple<int, int> GameEntity::getPos(){
    return position;
}

char GameEntity::getType(){
    return this-> type;
}


void GameEntity::setPos(int x, int y){
    position = std::make_tuple(x,y);
}
void GameEntity::setType(char type){
    this->type = type;
}

