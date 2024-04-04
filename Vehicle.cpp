#include "Vehicle.h"
#include <iostream>
#include <ctime>

using namespace std;

Vehicle::Vehicle(int ID){
    this->ID = ID;
    timeOfEntry = time(NULL);
}



