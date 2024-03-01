#include <iostream>
extern int max_element(int array[], int n);

int main(){
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array)/ sizeof(array[0]);
    int result = max_element(array, size);
    std::cout << "The  max number is: " << result << std::endl;
    return 0;

}