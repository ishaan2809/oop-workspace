#ifndef BUS_H
#define BUS_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;

class Bus:public Vehicle{
    private:
        int seconds;
    public:
        Bus(int id);
        virtual int getParkingDuration();
};

#endif