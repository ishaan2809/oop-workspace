#include "Appliance.h"
#include <iostream>

int main(){
    Appliance a1;
    Appliance a2(15);
    a2.turnOn();
    std::cout<< " Power rating "<< a2.get_powerRating()<< std::endl;
    std::cout<< "State : "<< a2.get_isOn()<< std::endl;

}