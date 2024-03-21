#include<iostream>
extern bool equalsArray(int *numbers1,int *numbers2,int length);
extern int *reverseArray(int *numbers1,int length) ;
int main(){
   int numbers1[] = {1,2,3,4,5};
   int numbers2[] = {1,2,3,4,5};
   int length = sizeof(numbers1)/sizeof(numbers1[0]);
   std::cout<<std::boolalpha<<equalsArray(numbers1,numbers2, length)<<std::endl;
   int * ptr = reverseArray(numbers1,length);
   for(int i = 0; i<length;i++){
     std::cout << ptr[i] << " ";
   }








}