#include <iostream>
int *readNumbers(){
    int * arr = new int[10];
    for(int i  = 0; i<10; i++){
        std::cout<<"Enter a number:"<<std::endl;    
        std::cin>>arr[i];
    }
    return arr;
}
    
bool equalsArray(int *numbers1,int *numbers2,int length){
    for(int i = 0; i<length; i++){
        if (numbers1[i]!=numbers2[i]){
            return false;
        }
    }
    return true;
    
}











int *reverseArray(int *numbers1,int length){
    int index = 0;
    int*reverse = new int[10];
    for( int i = length-1; i>=0; i--){
        reverse[index] = numbers1[i];
        index++;
        
        
    }
    return reverse;
}
        


int main(){
    int * ptr1 = readNumbers();
    int * ptr2 = reverseArray(ptr1,10);
    std::cout<<std::boolalpha<<equalsArray(ptr1,ptr2,10)<<std::endl;
}