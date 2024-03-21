#include <iostream>

int *readNumbers(){
    int *array = new int[10];
    for( int i  = 0; i<10; i++){
        std::cout<<"Enter a number"<<std::endl;
        std::cin>>array[i];
    }
    return array;
}


void printNumbers(int *numbers,int length){
    for( int i  = 0; i< length; i++){

    
        std::cout<<i<<" "<< numbers[i]<<std::endl;
    } 

}
