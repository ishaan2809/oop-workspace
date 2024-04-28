
#include "Appliance.h"
#include "Fridge.h"
#include "House.h"
#include "TV.h"
#include <iostream>

int main(){

    House h1(3);

    Fridge f1(12,22);
    TV tv1(465,88.5);
    Fridge f2(2,2.2);
    TV tv2(10,8.5);
    

    if (h1.addAppliance(&f1))
    {
        std::cout << "appliance added" << std::endl;
    }else{
        std::cout << "appliance not added" << std::endl;
    }

    if (h1.addAppliance(&f2))
    {
        std::cout << "appliance added" << std::endl;
    }else{
        std::cout << "appliance not added" << std::endl;
    }

    if (h1.addAppliance(&tv1))
    {
        std::cout << "appliance added" << std::endl;
    }else{
        std::cout << "appliance not added" << std::endl;
    }

    if (h1.addAppliance(&tv2))
    {
        std::cout << "appliance added" << std::endl;
    }else{
        std::cout << "appliance not added" << std::endl;
    }

    std::cout << "Total power consumption:" << h1.getTotalPowerConsumption() << std::endl;


    

    return 0;
}