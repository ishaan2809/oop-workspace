#include<iostream>
extern void print_pass_fail(char grade);

int main() {
  char input_grade;
  std::cout << "Enter a grade A, B, C, D, or E: ";
  std::cin >> input_grade;

  print_pass_fail(input_grade);

  return 0;
}