#include "Vehicle.h"
#include "bus.h"
#include <iostream>
#include <ctime>

using namespace std;

Bus::Bus(int id):Vehicle(id){   
}

int Bus::getParkingDuration(){
    return Vehicle::getParkingDuration() * 0.25;
}


