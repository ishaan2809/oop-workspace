#include "Appliance.h"
#include <iostream>
#include "TV.h"

int main(){

    
    TV tv1;
    TV tv2(465,88.5);

    tv1.turnOff();
    tv2.turnOn();
    // tv2.set_powerRating(10);
    std::cout << "Power consumption: "<< tv2.getPowerConsumption() << " size:  " << tv2.getScreenSize() << "  Rating: " << tv2.get_powerRating()  << std::endl;

    return 0;
}   