
#include "Obstacle.h"
#include "Avatar.h"
#include <tuple>
#include <iostream>
int main(){



Avatar avatar(5,8);
std::cout <<"Avatar x"<< std::get<0>(avatar.getCoordinates()) <<std::endl;

std::cout <<"Avatar y"<< std::get<1>(avatar.getCoordinates()) <<std::endl;

avatar.shift(3,3);
std::cout <<"Avatar x"<< std::get<0>(avatar.getCoordinates()) <<std::endl;

std::cout <<"Avatar y"<< std::get<1>(avatar.getCoordinates()) <<std::endl;


Obstacle obstacle(5,6);
std::cout << "Coordinates: (" << std::get<0>(obstacle.getCoordinates()) << "," << std::get<1>(obstacle.getCoordinates()) << ")" << std::endl;
std::cout << "Type: " << obstacle.getEntity() << std::endl;


obstacle.apply(avatar); 
std::cout << "New entity: " << avatar.getEntity() << std::endl;
}
