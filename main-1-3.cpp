#include "Person.h"
#include  <iostream>

extern PersonList deepCopyPersonList(PersonList pl);


int main(){
    PersonList orginalPersonalList;

    orginalPersonalList.numPeople = 3;
    orginalPersonalList.people = new Person[3];
    orginalPersonalList.people[0] = {"Jane Doe",1};
    orginalPersonalList.people[1] = {"Jane Doe",1};
    orginalPersonalList.people[2] = {"Jane Doe",1};

    PersonList deepCopiedList = deepCopyPersonList(orginalPersonalList);
    for (int i = 0; i < deepCopiedList.numPeople; i++){
        std::cout << deepCopiedList.people[i].name << "|" << deepCopiedList.people[i].age << std::endl;
    }
    
    return 0;
}