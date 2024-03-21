#include <iostream>
extern int *readNumbers();
extern void printNumbers(int *numbers,int length);
int main(){
int * ptr = readNumbers();
int length = 10;
printNumbers(ptr,length);
}

    









