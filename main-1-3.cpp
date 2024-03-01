#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int num_count(int array[], int n, int number);
int main() {
    int array[5] = {1,2,3,4,5};
    int size = sizeof(array)/ sizeof(array[0]);
    int result = num_count(array, size, 3);
    std::cout << "The number is: " << result << std::endl;
    return 0;
}