#include "Appliance.h"
#include "TV.h"

TV::TV(){
    this-> powerRating = 0;
    this-> screenSize = 0;
}

TV::TV(int powerRating, double screenSize){
    this->powerRating = powerRating;
    this-> screenSize = screenSize;
}

void TV::setScreenSize(double screenSize){
    this-> screenSize = screenSize;
}

double TV:: getScreenSize(){
    return screenSize;
}


double TV:: getPowerConsumption(){
    return  powerRating*(screenSize/10);
}



