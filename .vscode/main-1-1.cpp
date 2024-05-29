#include "GridUnit.h"
#include "Helper.h"
#include <iostream>
#include <tuple>

int main(){
        std::tuple<int,int> pos1 = Helper::generateRandomCoordinates(10,10);
        std::tuple<int, int> pos2 = Helper::generateRandomCoordinates(50,50);
        double distance =   Helper::calculateDistance(pos1,pos2);
        std::cout<<"The distance: "<< distance<< std::endl;
}