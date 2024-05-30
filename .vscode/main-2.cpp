#include "Trap.h"
#include "Character.h"
#include <tuple>
#include <iostream>

int main(){
    Trap trap(55,78);
    std::cout<<" x : "<< std::get<0>(trap.getPos())<< "y : "<< std::get<1>(trap.getPos()) <<std::endl;
    std::cout<<"Type: "<< trap.getType()<< std::endl;
    Character character(10,10);
    std::cout<<"Type: "<< character.getType()<< std::endl;
    std::cout<<" x : "<< std::get<0>(character.getPos())<< "y : "<< std::get<1>(character.getPos()) <<std::endl;

    character.move(1,1);
    std::cout<<"Type: "<< character.getType()<< std::endl;
    std::cout<<" x : "<< std::get<0>(character.getPos())<< "y : "<< std::get<1>(character.getPos()) <<std::endl;



}