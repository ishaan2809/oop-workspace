
double arrayMin( double*array, int size){
    int min = array[0];
    for(int i = 0; i<size; i++){
        if(array[i]< min){
            min = array[i];
        }
    }
    return min;

}


//if((array[i] != array[n-i-1]) || (!(array[i]<array[i+1])))