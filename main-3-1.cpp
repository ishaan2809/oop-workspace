#include "AirFleet.h"
#include <string>
#include <iostream>

int main(){
    AirFleet fleet;
    AirCraft **vehicles = fleet.get_fleet();
    for( int i = 0; i<5; i++){
        std::cout<<vehicles[i]->get_weight()<<std::endl;
    }
}

