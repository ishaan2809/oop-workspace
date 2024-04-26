#ifndef TV_H
#define TV_H    
#include "Appliance.h"
#include <iostream>

class TV: public Appliance{
    private:
    double screenSize;

    public:
    TV();
    TV(int powerRating, double screenSize);
    void setScreenSize(double screenSize);
    double getScreenSize();
    double getPowerConsumption();

};
#endif

