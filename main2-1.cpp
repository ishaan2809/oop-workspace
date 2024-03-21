extern void hexDigits(int *numbers,int length);
int main(){
    int numbers[] = {11,12,3,4,15,6,7,8,9,10};
    int length = sizeof(numbers)/sizeof(numbers[0]);
    hexDigits(numbers, length);

}

