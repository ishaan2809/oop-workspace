#include "Unit.h"
#include <iostream>
#include <string>

Unit::Unit()
{
    _unit_val = 0;
    _num_beds = 0;
    _unit_size = 0;   
}

Unit::Unit(int unit_val, int num_beds, double unit_size){
    _unit_val = unit_val;
    _num_beds = num_beds;
    _unit_size = unit_size;

}   

int Unit::get_Num_Bedrooms(){
    return _unit_val;

}

int Unit::get_Value(){
    return _num_beds;

}

double Unit::get_Area(){
    return _unit_size;

}




