#include <iostream>
#include "Person.h"
extern Person* createPersonArray(int n);


int main(){
    int n = 5; 
    Person* personArray = createPersonArray(n);
    for( int i  = 0; i< n; i++){
        std::cout<<personArray[i].name<<personArray[i].age<<std::endl;
    }


delete[] personArray;
return 0;
}
