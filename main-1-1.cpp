#include <iostream>
#include "Unit.h"
int main() {
Unit u1;
std::cout << u1.get_Num_Bedrooms() << u1.get_Value() << u1.get_Area()<< std::endl;
Unit u2(3, 27000, 120);
std::cout << u2.get_Num_Bedrooms() <<u2.get_Value() << u2.get_Area() << std::endl;
return 0;
}
