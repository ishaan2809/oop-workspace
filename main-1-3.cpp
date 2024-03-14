#include <iostream>
extern double* duplicateArray(double* array, int size);
int main(){
    double array [] = {1,2,3,4,5};
    int size = sizeof(array)/sizeof(array[0]);
    double *ptr = duplicateArray(array, size);
    for( int i  = 0; i< size; i++){
        std::cout<<ptr[i]<< " ";
    }
    std::cout<<std::endl;

}
