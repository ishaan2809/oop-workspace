#include "GridUnit.h"
#include "Helper.h"
#include <tuple>
#include <iostream>

int main(){
        std::tuple<int, int> pos1 = Helper::generateRandomCoordinates(10, 10);
        std::tuple<int, int> pos2 = Helper::generateRandomCoordinates(20, 20);

        double distance = Helper::calculateDistance(pos1, pos2);
        std::cout<<"The distance is: "<< distance<< std::endl;

}