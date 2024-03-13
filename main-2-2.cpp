#include <iostream>
extern void arrayAdd(double*array, int size, double value);

int main(){
    double array [] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    double value = 6;
    arrayAdd(array, size, value);
    

}














    

 
 