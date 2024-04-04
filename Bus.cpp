#include "Vehicle.h"
#include "Bus.h"
#include <iostream>
#include <ctime>

using namespace std;

Bus::Bus(int id):Vehicle(id){   
}

int Bus::getParkingDuration(){
    return Vehicle::getParkingDuration() * 0.75;
}


