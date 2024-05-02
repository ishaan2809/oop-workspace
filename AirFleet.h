#include "AirCraft.h"
#ifndef AIRFLEET_H
#define AIRFLEET_H
class AirFleet : public AirCraft{
    private:
        AirCraft **fleet;
    
    public:
        AirFleet();
        AirCraft **get_fleet(); 

};
#endif