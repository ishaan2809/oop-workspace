#include "AirCraft.h"
#include "Airplane.h"
#include <iostream>

int main(){


Airplane  a1(5690, 120);
a1.reducePassengers(20);
std::cout<<"Passengers"<<a1.get_numPassengers()<< std::endl;
a1.fly(65, 120);
std::cout<<"Number of flights: "<<a1.get_numberOfFlights()<<std::endl;
std::cout<<"fuel:  "<<a1.get_fuel()<<std::endl;



}

