
#include  <iostream>

// part 2
void changeValue(double*ptr){
    *ptr = 42;
    std::cout<<*ptr<<std::endl;
}


// part 3

void printArray(double* arr, int size){
    for( int i = 0; i< size; i++){
        std::cout<<arr[i]<<" "; 
           
    }
    std::cout<<std::endl;
}


// part 4

double arrayMax(double*arr, int size){
    int max = arr[0];
    for( int i = 0; i< size; i++){
        if( arr[i]> max){
            max = arr[i];
        }

    }
    return max;
}


// part 5

double* dynamicArray(int N){
    double value = 5.2;
    double* array = new double[N];
    for (int i = 0; i < N; i++){
        array[i] = value;
    }
    return array;   
}

// part 6






// part 7
double* dynamicArray(int N, double M) {
    double* array = new double[N];
    for( int i =0; i< N; i++){
        array[i] = M;   
    }
    return array;
}





