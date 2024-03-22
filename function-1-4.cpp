#include "Person.h"
#include <iostream>

PersonList shallowCopyPersonList(PersonList pl){
    PersonList copiedList;
    copiedList.numPeople = pl.numPeople;
    copiedList.people = pl.people;

    return copiedList;
}