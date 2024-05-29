#ifndef HELPER_H
#define HELPER_H

#include <tuple>

class Helper{
    public:
    static std::tuple<int, int> generateRandomCoordinates(int gridWidth, int gridHeight);
    static double calculateDistance(std::tuple<int, int> coords1, std::tuple<int, int> coords2);

};
#endif