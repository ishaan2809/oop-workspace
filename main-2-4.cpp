#include <iostream>
extern bool is_ascending(int array[], int n);
int main() {
    int array[] = { 1, 3, 4, 5};
    int n = sizeof(array) / sizeof(array[0]);
    bool result = ( array, n);
    std::cout << std::boolalpha;
    std::cout << "Ascending order is " << result << std::endl; 
    return 0;

}