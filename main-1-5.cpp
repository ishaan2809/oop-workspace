#include <iostream>

// The `extern` keyword tells the compiler that the count function exists,
// but will be implemented somewhere else
extern int count_evens(int number);


    int main() {
    int number;
    std::cout << "Enter a number: " <<std::endl;
    std::cin >> number;

    int result = count_evens(number);
    std::cout << "Number of even numbers between 1 and " << number << " is " << result << std::endl;

    return 0;
}