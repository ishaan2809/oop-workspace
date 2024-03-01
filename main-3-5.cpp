#include<iostream>
extern double sum_even(double array[], int n);
int main() {
    double array[] = {1.0, 2.0, 3.0, 4.0};
    std::cout<<"sum of the elements in the even positions is "<< sum_even(array, 4)<<std::endl;
    return 0;
    


}