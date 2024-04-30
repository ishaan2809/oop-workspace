#include "AirVehicle.h"
#include <iostream>

int main(){
AirVehicle a1(300);
std::cout<<a1.get_weight()<<std::endl;
a1.set_fuel(50);
std::cout<<a1.get_fuel()<<std::endl;
a1.set_weight(50);
std::cout<<a1.get_weight()<<std::endl;
std::cout<< "Before:  "<< a1.get_numberofFlights()<<std::endl;

a1.refuel();
a1.fly(0,0);
std::cout<<a1.get_fuel()<<std::endl;
std::cout<<"After:  "<< a1.get_numberofFlights()<<std::endl;

}



