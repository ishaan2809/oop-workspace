#include "Utils.h"
#include <cstdlib>
#include <cmath>
#include <tuple>
#include <ctime>

std::tuple<int, int> Utils::generateRandomPos(int gridWidth, int gridHeight){
    std::srand(std::time(0));   
    int x = std::rand() % gridWidth;
    int y = std::rand() % gridHeight;
    return std::make_tuple(x,y);
}
double Utils::calculateDistance(std::tuple<int, int> pos1, std::tuple<int, int> pos2){
    int x1, y1, x2, y2;
    std::tie(x1,y1) = pos1;
    std::tie(x2,y2) = pos2;
    return std::sqrt((x2-x1)*(x2- x1) + (y2-y1)*(y2-y1));


}
