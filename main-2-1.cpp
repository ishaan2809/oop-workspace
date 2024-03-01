#include <iostream>
extern int min_element(int array[], int n);

int main(){
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array)/ sizeof(array[0]);
    int result = min_element(array, size);
    std::cout << "The  minimum number is: " << result << std::endl;
    return 0;

}
