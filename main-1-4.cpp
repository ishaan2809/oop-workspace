#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int sum_two_arrays(int array[], int secondarray[], int n);


int main() {
    int array[] = {1, 2, 3, 4, 5};
    int secondarray[] = {6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(array[0]);
    int result = sum_two_arrays(array, secondarray, size);
    std::cout << "The sum of two arrays is: " << result << std::endl;
    return 0;
}

