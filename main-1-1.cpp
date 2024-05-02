#include "AirCraft.h"
#include <iostream>

int main(){
    AirCraft a1(50);
    std::cout<<"Fuel: "<<a1.get_fuel()<< std::endl;
    std::cout<<"Weight: "<<a1.get_weight()<< std::endl;
    std::cout<<"Number of flights: "<<a1.get_numberOfFlights()<< std::endl;
    a1.refuel();
    std::cout<<"Fuel: "<<a1.get_fuel()<< std::endl;
    a1.fly(50,30);
     std::cout<<"Number of flights: "<<a1.get_numberOfFlights()<< std::endl;
    
}