#include <iostream>
extern bool is_descending(int array[], int n);
int main() {
    int array[] = {5, 4, 3, 2, 1};
    int n = sizeof(array) / sizeof(array[0]);
    bool result = ( array, n);
    std::cout << std::boolalpha;
    std::cout << "Descending order is " << is_descending( array, n) << std::endl; 
    return 0;
}