
#include "Unit.h"
#include <iostream>
#include "ApartmentBuilding.h"
int main() {
    
    ApartmentBuilding apartmentbuilding(5);

    
    Unit u1(1,2,3);
    Unit u2(4,5,6);
    Unit u3(1,3,4);
    Unit u4(2,5,7);
    Unit u5(6,8,4);

    
    if (apartmentbuilding.add_Unit(u1)) {
        std::cout << "Added unit 1 to the apartmentbuilding" << std::endl;
    } else {
        std::cout << "Could not add unit  1 to the apartmentbuilding" << std::endl;
    }
    if (apartmentbuilding.add_Unit(u2)) {
        std::cout << "Added unit 2 to the apartmentbuilding" << std::endl;
    } else {
        std::cout << "Could not add unit 2 to the apartmentbuilding" << std::endl;
    }
    if (apartmentbuilding.add_Unit(u3)) {
        std::cout << "Added unit 3 to the apartmentbuilding" << std::endl;
    } else {
        std::cout << "Could not add unit 3 to the apartmentbuilding" << std::endl;
    }
    if (apartmentbuilding.add_Unit(u4)){
        std::cout << "Added unit 4 to the apartmentbuilding" << std::endl;
    } else {
        std::cout << "Could not add unit 4 to the apartmentbuilding" << std::endl;
    }
    if (apartmentbuilding.add_Unit(u5)) {
        std::cout << "Added unit 5 to the apartmentbuilding" << std::endl;
    } else {
        std::cout << "Could not add unit 5 to the apartmentbuilding" << std::endl;

    std::cout <<apartmentbuilding.get_Current_Number_of_Units() << std::endl;


    Unit *members = apartmentbuilding.get_Contents();

    for (int i = 0; i < apartmentbuilding.get_Current_Number_of_Units(); i++) {
        std::cout <<i+1 << units[i].get_Num_Bedrooms() <<units[i].get_Value() << units[i].get_Area()<<std::endl;
    }
    
    return 0;
    
}

}
