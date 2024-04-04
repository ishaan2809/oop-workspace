#ifndef MOTORBIKE_H
#define MOTORBIKE_H
#include <string>
#include <iostream>
#include <ctime>
#include "Vehicle.h"

using namespace std;


class Motorbike:public Vehicle{
    private:
        int seconds;
    public:
        Motorbike(int id);
        virtual int getParkingDuration();
};

#endif