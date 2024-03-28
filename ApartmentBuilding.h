#ifndef APARTMENTBUILDING_H
#define APARTMENTBUILDING_H
#include <string>
#include "Unit.h"

class ApartmentBuilding{
    private:
    int max_size;
    int current_units;
    Unit* units;

    public:
    ApartmentBuilding(); 
    ApartmentBuilding(int capacity);
    int get_Capacity();  
    int get_Current_Number_of_Units();
    Unit * get_Contents();
    bool add_Unit(Unit unit);
    ~ApartmentBuilding();



};
#endif