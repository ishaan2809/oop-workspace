#include<iostream>
extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);




int main() {
    int array[] = {1, 2, 3, 4, 5, 6};
    int length = sizeof(array) / sizeof(array[0]);
    int sum = sum_min_max(array, length);
    if (sum != -1) {
        std::cout << "Sum of min and max elements: " << sum << std::endl;
    } else {
        std::cout << "Invalid input." << std::endl;
    }
    return 0;
}
