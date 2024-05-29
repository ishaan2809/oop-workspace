
#include <iostream>
#include "GameEntity.h"

int main(){
    GameEntity Entity(5,10,'A');
    // std::tuple<int, int> pos = Entity.getPos();
    // int x = std::get<0>(pos);
    // int y = std::get<1>(pos);
    // char type = Entity.getType();

    
    std::cout << "Entity position" << std::get<0>(Entity.getPos())<< ", " <<std::get<1>(Entity.getPos());
    std::cout << "Entity type: " << Entity.getType() << "\n";




}


