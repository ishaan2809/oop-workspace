#include "Appliance.h"
#include "Fridge.h"
#include <iostream>

int main(){
    Fridge f1(10,45);
    std::cout<<" Volume 1 : "<< f1.getVolume() << std::endl;
    f1.setVolume(300);
    f1.turnOn();
    std::cout<<" State: "<< (f1.get_isOn()?"on":"off") << std::endl;
    std::cout<<" Volume 2: "<< f1.getVolume() << std::endl;
    std::cout<<"Power consumption: "<< f1.getPowerConsumption()<< std::endl;
    
}