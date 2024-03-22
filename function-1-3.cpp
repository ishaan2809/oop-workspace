#include "Person.h"
#include <iostream>

PersonList deepCopyPersonList(PersonList pl){
    PersonList copiedPersonList;
    copiedPersonList.numPeople = pl.numPeople;
    copiedPersonList.people = new Person[pl.numPeople];

    for (int i = 0; i < pl.numPeople; i++){
        copiedPersonList.people[i].name = pl.people[i].name;
        copiedPersonList.people[i].age = pl.people[i].age;
    }

    return copiedPersonList;
}
