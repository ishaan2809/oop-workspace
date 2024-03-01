#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int array_sum(int array[], int n);
int main() {
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array)/ sizeof(array[0]);
    int result = array_sum(array, 5);
    std::cout << "The number is: " << result << std::endl;
    return 0;
}