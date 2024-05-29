#include "Helper.h"
#include <tuple>
#include <cmath>
#include <cstdlib>

    std::tuple<int, int> Helper::generateRandomCoordinates(int gridWidth, int gridHeight){
        int x  = std::rand()% gridWidth;
        int y  = std::rand()% gridHeight;
         return std::make_tuple(x,y);
    }
    double Helper::calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2){
        int x1 = std::get<0>(coords1);
        int x2 = std::get<1>(coords2);
        int y1 = std::get<0>(coords1);
        int y2 = std::get<1>(coords2);
        return std::sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));

    }

