
#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

Fridge::Fridge(){
    this->powerRating = powerRating;
    this->volume =  volume;
}
Fridge::Fridge(int powerRating, double volume){
    this->powerRating = powerRating;
    this->volume = volume;

}
void Fridge::setVolume(double volume){
    this->volume = volume;
}
 double Fridge::getVolume(){
    return volume;
 }

 double Fridge::getPowerConsumption(){
    return powerRating* 24*(volume/100);

 }

 
