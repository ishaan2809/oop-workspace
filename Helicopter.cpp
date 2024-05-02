#include "AirCraft.h"
#include "Helicopter.h"
#include <string>

Helicopter::Helicopter(int w, string n){
    this-> weight = w;
    this-> name = n;
    this-> fuel = 80;
    this-> numberOfFlights = 0;

}

void Helicopter::fly(int headwind, int minutes){
    double fuelNeeded = 0;
    int extraWeight = weight> 5670?weight - 5670:0;
    if(headwind>40){
        fuelNeeded = (0.4*minutes) + (0.01* extraWeight* minutes);
    }
    else{
        fuelNeeded = (0.2 *minutes) + (0.01* extraWeight* minutes);
    }
    fuel = fuel - fuelNeeded;

    if(fuel<20){
        return;
    }
    numberOfFlights++;


}

string Helicopter::get_name(){
    return this->name;
}