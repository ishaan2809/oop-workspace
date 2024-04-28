#include "Appliance.h"
#include "TV.h"
#include <iostream>

TV::TV(){
    powerRating = 0;
    screenSize = 0.0;
}

TV::TV(int powerRating, double screenSize){
    this->powerRating = powerRating;
    this->screenSize = screenSize;

}

void TV::setScreenSize(double screenSize){
    this->screenSize = screenSize;
}

double TV::getScreenSize(){
    return screenSize;
}

  double TV::getPowerConsumption(){
    return powerRating* (screenSize/10);

}



