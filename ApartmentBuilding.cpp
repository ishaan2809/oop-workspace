#include <iostream>
#include<string>
#include "ApartmentBuilding.h"


ApartmentBuilding::ApartmentBuilding()
{
    max_size = 10;
    current_units = 0;
}

ApartmentBuilding::ApartmentBuilding(int capacity)
{
    max_size = capacity;
    current_units = 0;
    units =  new Unit[max_size];


}

int ApartmentBuilding::get_Capacity(){
    return max_size;
}

int ApartmentBuilding::get_Current_Number_of_Units(){
    return current_units;


}

Unit * ApartmentBuilding::get_Contents(){
    return units;
}

 bool ApartmentBuilding::add_Unit(Unit unit){
    if(current_units < max_size){
        units[current_units] = unit;
        current_units++;
        return true;
    }
    return false;
 }
 ApartmentBuilding::~ApartmentBuilding(){
    delete[] units;

 }

 








