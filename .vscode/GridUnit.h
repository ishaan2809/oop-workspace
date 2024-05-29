#ifndef GRIDUNIT_H
#define GRIDUNIT_H
#include <tuple>
class GridUnit{
    protected:
    std::tuple<int, int> coordinates;
    char entity;

    public:
    GridUnit(int x, int y, char entity){
        this->coordinates = std::make_tuple(x,y);
        this->entity = entity;
    }
        std::tuple<int, int> getCoordinates(){
            return coordinates;

        }
    void setCoordinates(int x, int y){
        this->coordinates = std::make_tuple(x,y);
    }
    void setEntity(char entity){
        this->entity = entity;
    }

    char getEntity(){
        return entity;
    }
};
#endif  