#include<iostream>
extern double arrayMin( double*array, int size);
int main(){
    double array[] = {1,2,3,4,5,6};
    int size = sizeof(array)/sizeof(array[0]);
    std::cout<<arrayMin(array,size)<<std::endl;
    

}
