
#include "Utils.h"
#include <iostream>
 int main(){
    std::tuple<int, int> pos1 = Utils::generateRandomPos(100,100);
    std::tuple<int, int> pos2 = Utils::generateRandomPos(50,50);

    std::cout<< "Postion: " << std::get<0>(pos1)<<","<<std::get<1>(pos1)<< std::endl;
    double distance = Utils::calculateDistance(pos1, pos2);
    std::cout << "Distance between positions: " << distance << std::endl ;

    return 0;
}

