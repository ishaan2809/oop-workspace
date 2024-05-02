#include "AirCraft.h"
#include "Helicopter.h"
#include <iostream>
#include <string>
int main(){
    Helicopter h1(5690, "Emirates");
    std::cout<<"Name: "<< h1.get_name()<<std::endl;
    h1.fly(45, 10);
    std::cout<<"fuel: "<< h1.get_fuel()<< std::endl;
    std::cout<<"number of flights: "<< h1.get_numberOfFlights()<<std::endl;

}