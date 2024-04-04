#ifndef PARKINGLOT_H
#define PARKINGLOT_H
#include "Vehicle.h"
#include <iostream>
class ParkingLot
{
private:
    int capacity;
    int current;
    Vehicle **vehicles;

public:
    ParkingLot(int max);
    ParkingLot();
    int getCount(){
        return capacity;
    }
    void parkVehicle(Vehicle *vehicle);
    void unparkVehicle(int ID);
    int countOverstayingVehicles(int maxParkingDuration);
    ~ParkingLot();
};

#endif