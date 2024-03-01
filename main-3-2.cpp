#include<iostream>
extern int median_array(int array[], int n);
int main(){
    int array[5] = {3,5,2,1,4};
    std::cout<<"median of array is "<<median_array(array, 5)<< std::endl;
    return 0;
}