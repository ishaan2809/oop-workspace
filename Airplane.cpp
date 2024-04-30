#include "AirVehicle.h"
#include "Airplane.h"

Airplane::Airplane(){

};

Airplane::Airplane(int w, int p){
    this->weight = w;
    this->numPassengers = p;
    this->numberofFlights = 0;
}

void Airplane::reducePassengers(int x){
    this-> numPassengers = numPassengers - x;  
    if (numPassengers<0){
        numPassengers = 0;
    }

}

int Airplane:: get_numPassengers(){
    return numPassengers;
}

 void Airplane:: fly(int headwind, int minutes){
    double fuelNeeded = 0;
    if (headwind < 60){
        fuelNeeded = (0.25*minutes) + (0.001 * numPassengers* minutes);

    }
       else
    {
        fuelNeeded = (0.5 * minutes) + (0.001 * numPassengers * minutes);

    }
    if (fuel - fuelNeeded < 20)
    {
        return;
    }

    fuel = fuel - fuelNeeded;
    numberofFlights++;

 }




