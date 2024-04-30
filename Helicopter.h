#include "AirVehicle.h"
#include <string>
#ifndef HELICOPTER_H
#define HELICOPTER_H
using namespace std;
class  Helicopter: public AirVehicle{
    private:
    string name;
    

    public:
    Helicopter();
    Helicopter(int w, string n);
    void fly(int headwind, int miinutes);
    void set_name(string name);
    string get_name();
    


    

};
#endif