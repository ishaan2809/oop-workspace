#include "AirVehicle.h"


AirVehicle::AirVehicle(){

}

AirVehicle::AirVehicle(int w){
    this->weight = w;
    this-> numberofFlights = 0;

}

void AirVehicle::refuel(){
    this->fuel = 100;
}

void AirVehicle:: fly(int headwind, int minutes){
    numberofFlights++;
}

void AirVehicle::set_weight(int w){
    this->weight = w;
}

int AirVehicle::get_weight(){
    return weight;
}


void AirVehicle::set_fuel(float f){
    this->fuel = f;
}

float AirVehicle::get_fuel(){
    return fuel;
}

int AirVehicle::get_numberofFlights(){
    return numberofFlights;

}




