#include "Vehicle.h"
#include "car.h"
#include <iostream>
#include <ctime>
using namespace std;
Car::Car(int id):Vehicle(id){
      
}

int Car::getParkingDuration(){
    return Vehicle::getParkingDuration() * 0.1;
}





