#include "AirVehicle.h"
#include "Airplane.h"
#include <iostream>
int main(){
    Airplane a1(65, 120);
    a1.fly(35,20);
    std::cout << a1.get_numberofFlights() << std::endl;
    a1.reducePassengers(20);
    std::cout<< a1.get_numPassengers()<<std::endl;
    return 0;
    
}