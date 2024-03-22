
#include <iostream>
#include "Person.h"

extern PersonList shallowCopyPersonList(PersonList pl);
int main(){
    PersonList orginalPersonalList;

    orginalPersonalList.numPeople = 3;
    orginalPersonalList.people = new Person[3];
    orginalPersonalList.people[0] = {"Jane Doe",1};
    orginalPersonalList.people[1] = {"Jane Doe",1};
    orginalPersonalList.people[2] = {"Jane Doe",1};

    PersonList shallCopiedList = shallowCopyPersonList(orginalPersonalList);
    for (int i = 0; i < shallCopiedList.numPeople; i++){
        std::cout << shallCopiedList.people[i].name << "|" << shallCopiedList.people[i].age << std::endl;
    }
    
    return 0;
}