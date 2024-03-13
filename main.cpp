#include "workshop.h"
#include <iostream>
int main(){


    // part 2
    double original = 45;
    changeValue(&original);

    // part 3
    double array[] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    printArray(array,size);

    // part 4
    double arr[] = {1,7,3,6,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    std::cout<<"The maximum number is: "<< arrayMax(arr, size)<<" ";
    std::cout<<std::endl;

    // part 5


    // part 7
    int n = 5;
    double m = 3.14;
    double *newArray = dynamicArray(n,m);
    for( int i = 0; i<n; i++){
        std::cout<< newArray[i]<< " "; 
         }
    
    


    









}




