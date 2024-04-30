#include "AirVehicle.h"
#ifndef AIRFLEET_H
#define AIRFLEET_H
class AirFleet: public AirVehicle{
    private:
    AirVehicle**fleet;

    public:
    AirFleet();
    AirVehicle ** get_fleet();


};
#endif