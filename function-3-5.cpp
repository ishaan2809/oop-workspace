double sum_even(double array[], int n){

if(n<1){
    return 0;

}
int sum = 0;
for(int i = 0; i< n; i = i+2){
    sum = sum + array[i];
}
return sum;
}