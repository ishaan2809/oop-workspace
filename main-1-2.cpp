#include "Person.h"
extern PersonList createPersonList(int n);
#include<iostream>

int main() {
    int n = 5; 

    PersonList personList = createPersonList(n);
    for (int i = 0; i < personList.numPeople; ++i) {
        std::cout<< personList.people[i].name; 
        std::cout<< personList.people[i].age << std::endl;
    }

    delete[] personList.people;

    return 0;
}