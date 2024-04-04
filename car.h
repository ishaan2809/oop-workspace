#ifndef CAR_H
#define CAR_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;
 class Car: public Vehicle{
    private:
        int seconds;
    public:
        
        Car(int id);
        virtual int getParkingDuration();
 };
 #endif


