#include "AirCraft.h"


AirCraft::AirCraft(){

}

AirCraft::AirCraft(int w){
    this->weight = w;
    this-> fuel = 0;
    this->numberOfFlights = 0;

}

void AirCraft::refuel(){
    this->fuel = 100;
}

void AirCraft::fly(int headwind, int minutes){
    numberOfFlights++;
}

float AirCraft::get_fuel(){
    return this->fuel;
}

int AirCraft::get_weight(){
    return this->weight;
}

int AirCraft::get_numberOfFlights(){
    return this-> numberOfFlights;
}
  void AirCraft::set_fuel(int f){
    this->fuel = f;
  }
    void AirCraft::set_weight(int w){
        this->weight = w;
    }

    void AirCraft::set_numberofFlights(int n){
        this->numberOfFlights = n;
    }



