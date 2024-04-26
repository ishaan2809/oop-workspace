
#include "Appliance.h"
#include <iostream>
Appliance::Appliance(){
    this->powerRating = 0;
    this->isOn = false;

}

Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;

}
 
void Appliance::turnOn(){
    this->isOn = true;
}

void Appliance::turnOff(){
    this->isOn = false;
}

void Appliance::set_powerRating(int powerRating){

    this->powerRating = powerRating;

}
int Appliance::get_powerRating(){
    return powerRating;


}


bool Appliance::get_isOn(){
    return isOn;
}

double Appliance::getPowerConsumption(){
    return 0;
}







