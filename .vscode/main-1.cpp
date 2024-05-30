
#include "Utils.h"
#include <tuple>
#include <iostream>

int main(){
    std::tuple<int, int> pos1 = Utils::generateRandomPos(10,10);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(50,50);
    
    double distance = Utils::calculateDistance(pos1,pos2);
    std::cout<<"The distance: "<< distance<< std::endl;
}