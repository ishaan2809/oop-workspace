#include <iostream>
void count_digits(int array[4][4]){
    int count[10] = {0}; 
    for(int i=0; i<4; i++){
        for(int j =0; j<4; j++){
            int digit = array[i][j];
            count[digit]++;


        }
    }

for(int i=0; i<10; i++){
    std::cout <<i<<":"<< count[i]<<";"<<std::endl;

}
}