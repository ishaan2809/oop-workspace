#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <tuple>

class GridUnit{
    protected:
    std::tuple<int, int> coordinates;
    char entity;

    public:
    GridUnit(int x, int y, char entity);
    std::tuple<int, int> getCoordinates();
    char getEntity();
    void setEntity(char entity);
    void setCoordinates(int x, int y);

};
#endif