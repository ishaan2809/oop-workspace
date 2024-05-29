#include <iostream>
#include "Obstacle.h"
#include "Avatar.h"
#include <tuple>

int main(){
    Obstacle obstacle(5,6);
    Avatar avatar(12,17);
    std::cout<<"Avatar cordinates x: "<< std::get<0>(avatar.getCoordinates())<<std::endl;
    std::cout<<"Avatar cordinates y:  "<<std::get<1>(avatar.getCoordinates())<<std::endl;
    std::cout << "Type: " << avatar.getEntity()<<std::endl;
    

     avatar.shift(3, 3);
      std::cout<<"Avatar cordinates x: "<< std::get<0>(avatar.getCoordinates())<<std::endl;
    std::cout<<"Avatar cordinates y:  "<<std::get<1>(avatar.getCoordinates())<<std::endl;


    obstacle.apply(avatar);
    std::cout << "New Avatar Entity Type: " <<avatar.getEntity() << std::endl;
    std::cout << "Obstacle Active After Applying: " << (obstacle.isActive() ? "Yes" : "No") <<std:: endl;

    return 0;
}


