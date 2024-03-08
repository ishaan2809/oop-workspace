#include <iostream>
#include <string>
#include <bitset>
#include <cmath>

int binary_to_int( int binary_digits[], int number_of_digits)
{


int digits = 0;
int index = number_of_digits;
for(int i = 0; i < number_of_digits; i++){
    index--;
    if(binary_digits[i] ==1){
        digits += pow(2, index);

    }
    
}
return digits;
}



