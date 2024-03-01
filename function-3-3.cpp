double weighted_average(int array[], int n){
    double weightedAverage = 0;
    if(n<1){
        return 0;
    }else{
        for(int i=0; i<n; i++){
            int wi = 0;
            for (int j=0; j<n; j++){
                if(array[i] == array[j]){
                    wi++;

                }

            }
            weightedAverage+= array[i]*wi/double(n);

        }
        return weightedAverage;
    }
}
