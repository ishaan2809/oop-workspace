double array_mean(int array[], int n){
    if (n<1){
        return 0.0;
    
    }
    double sum = 0;
    double average;


    for (int i=0; i<n; i++){
        sum = sum + array[i];

    }
    average = sum/n;
    return average;

}