 extern int sum_if_palindrome(int integers[], int length);
 extern bool is_palindrome(int integers[], int length) ;
 extern int sum_array_elements(int integers[], int length);
 #include<iostream>

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {1, 2, 1, 2, 1};

    std::cout << sum_if_palindrome(array1, 5) << std::endl;
     

    return 0;
}