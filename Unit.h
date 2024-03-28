#ifndef UNIT_H
#define UNIT_H
#include <string>

class Unit{
    private:
    int _unit_val;
    int _num_beds;
    int _unit_size;

    public:
    Unit();
    Unit(int unit_val, int num_beds, double unit_size);
    int get_Num_Bedrooms();
    int get_Value(); 
    double get_Area();
};
#endif