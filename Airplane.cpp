#include "AirCraft.h"
#include "Airplane.h"

Airplane::Airplane(){

}

Airplane::Airplane(int w, int p){
    this-> weight = w;
    this-> numPassengers = p;
    this-> fuel = 100;
    this-> numberOfFlights = 0;


}
void Airplane::reducePassengers(int x){
    numPassengers = numPassengers - x;
    if(numPassengers <0){
        numPassengers = 0;
    }
}
int Airplane::get_numPassengers(){
    return this-> numPassengers;
}

void Airplane::fly(int headwind, int minutes){
    double fuelNeeded;
    if(headwind>60){
        fuelNeeded = (0.5*minutes) + (0.001* numPassengers* minutes);
    }
    else{
        fuelNeeded = (0.3*minutes) + (0.001* numPassengers* minutes);
    }
    fuel = fuel - fuelNeeded;

    if(fuel<20){
        return;
    }
    numberOfFlights++;


}
