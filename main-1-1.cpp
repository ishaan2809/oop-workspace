#include "Appliance.h"
#include <iostream>

int main(){
    Appliance a1;
    Appliance a2(45);
    a1.turnOn();// appliance 1 turned on
    std::cout<<" Appliance 1 powerrating: "<< a1.get_powerRating()<< " Appliance 1 turned on "<<(a1.get_isOn() ?"on":"off")<<std::endl;
    a2.turnOff();// appliance 2 turned off
    std::cout<<" Appliance 2 powerrating: "<< a2.get_powerRating()<< " Appliance 2 turned off "<<(a2.get_isOn() ?"on":"off")<<std::endl;
    a2.set_powerRating(15);
    std::cout<<" Appliance 2 powerrating: "<< a2.get_powerRating()<< " Appliance 2 turned on "<<(a2.get_isOn() ?"on":"off")<<std::endl;
}
