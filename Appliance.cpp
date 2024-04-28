#include "Appliance.h"
#include <iostream>

Appliance::Appliance(){
    this->powerRating = 0;
    this->isOn = false;
}

Appliance::Appliance(int powerRating){
    this->powerRating = powerRating;
    this->isOn = false;
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
 double Appliance::getPowerConsumption(){
    return 0;
 }

 bool Appliance::get_isOn(){
    return isOn;
 }





