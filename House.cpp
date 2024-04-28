#include "Appliance.h"
#include "House.h"
#include <iostream>

House::House(){
    this->numAppliances = 0;
    this->appliances = nullptr;
}

House::House(int numAppliances){
    this->numAppliances = numAppliances;
    appliances = new Appliance*[numAppliances];
}

bool House::addAppliance(Appliance* appliance){
    for(int i = 0;  i<numAppliances; i++){
        if(appliances[i] == nullptr){
        appliances[i] = appliance;
        return true;
        }
   
}
 return false;
}

double House::getTotalPowerConsumption(){
    double total = 0;
    for(int i = 0; i<numAppliances; i++){
    total = total + appliances[i]->getPowerConsumption();
    }
    return total;
}

