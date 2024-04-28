#include "Appliance.h"
#ifndef HOUSE_H
#define HOUSE_H
class House: public Appliance{
    private:
        int numAppliances;
    public:
        Appliance**appliances;
        House();
        House(int numAppliances);
        bool addAppliance(Appliance* appliance);
        double getTotalPowerConsumption();
        


};
#endif
