#include "Appliance.h"
#include "House.h"
#include <iostream>

House::House(){
    this->appliances = nullptr;
    this->numAppliances = 0;


}
House::House(int numAppliances){
    this->numAppliances = numAppliances;
    appliances = new Appliance*[numAppliances];
    for(int i = 0 ; i<numAppliances; i++)
    {
        appliances[i] = nullptr;

    }


}

bool House::addAppliance(Appliance*appliance){
    for( int i = 0; i< numAppliances; i++){
        if(appliances[i] == nullptr){
            appliances[i] = appliance;
            return true;
        }
    }
    return false;
}

double House::getTotalPowerConsumption(){
        double total = 0.0;
        for (int i = 0; i <numAppliances; i++) {
            //if (appliances[i] != nullptr) {
                total += appliances[i]->getPowerConsumption();
        //}
        }
        return total;
}





