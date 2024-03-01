#include <iostream>
extern bool is_ascending(int array[], int n);
int main() {
    int array[] = { 5 , 2, 3, 4};
    int n = sizeof(array) / sizeof(array[0]);
    bool result = is_ascending( array, n);
    std::cout << std::boolalpha;
    std::cout << "Ascending order is " << result << std::endl; 
    return 0;

}