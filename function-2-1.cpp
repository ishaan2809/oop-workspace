#include <iostream>
#include <bitset>
void print_binary_str(std::string decimal_number){
    int decimal = stoi(decimal_number);
    std::cout << stoi(std::bitset<32>(decimal).to_string()) << std::endl;
}