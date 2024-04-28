#include "Appliance.h"
#include <iostream>
#include "TV.h"

int main(){

    TV t1;
    TV t2(465, 88.5);

    t1.turnOff();
    t2.turnOn();
    
    std::cout << t2.getPowerConsumption() << " size:  " << t2.getScreenSize() << "  Rating: " << t2.get_powerRating()  << std::endl;

    return 0;
}   