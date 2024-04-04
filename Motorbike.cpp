#include "Vehicle.h"
#include "Motorbike.h"
#include <iostream>
#include <ctime>

using namespace std;

Motorbike::Motorbike(int id):Vehicle(id){   
}
int Motorbike::getParkingDuration(){
 return Vehicle::getParkingDuration() * 0.15;
}