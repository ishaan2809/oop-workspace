#include "AirVehicle.h"
#include "Helicopter.h"

Helicopter::Helicopter(){

};

Helicopter::Helicopter(int w, string n){
    this->weight = w;
    this->name = n;
    this-> fuel = 100;
    numberofFlights = 0;
}
void Helicopter::set_name(string name){
    this->name = name;

}
string Helicopter::get_name(){
    return name;
}

void Helicopter::fly(int headwind, int minutes){
    double fuelNeeded = 0;
    int extraWeight = weight > 5670 ? weight - 5670 : 0;
    if(headwind< 40){
        fuelNeeded = (0.18* minutes) + (0.01*extraWeight* minutes);
    }
    else{
         fuelNeeded = (0.4* minutes) + (0.01*extraWeight* minutes);
    }
    
    if (fuel = fuel - fuelNeeded < 20){
        return;
    }
    fuel = fuel - fuelNeeded;
        numberofFlights++;
    }

