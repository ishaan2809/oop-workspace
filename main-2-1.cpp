#include "AirVehicle.h"
#include "Helicopter.h"
#include <iostream>

int main(){
    Helicopter a1(54,"nigga");
    a1.set_name("sethuuuu");
    std::cout<<a1.get_name()<<std::endl;


    a1.fly(35,20);
    std::cout << a1.get_numberofFlights() << std::endl;
    std::cout << a1.get_fuel() << std::endl;
} 