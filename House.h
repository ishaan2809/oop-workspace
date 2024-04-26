
#ifndef HOUSE_H
#define HOUSE_H
#include "Appliance.h"

class House: public Appliance{

private:
    int numAppliances;

public:
House();
Appliance**appliances;
House(int numAppliances);
bool addAppliance(Appliance* appliance);
double getTotalPowerConsumption();




};
#endif
