#include "Appliance.h"
#include "Fridge.h"
#include <iostream>
using namespace std;
int main() 
{
Fridge f1;
Fridge f2(23,16);
//f2.setVolume(25);

std::cout <<" Power rating: " << f2.get_powerRating() << " Volume:  "<< f2.getVolume() << " Power Consumption:  "<< f2.getPowerConsumption()<< std::endl;
return 0;
}
