bool is_ascending(int array[], int n) {
    
    if (n<=0){
        return false;

    }
for(int i=0; i<n; i++){
    if (array[i]<=array[i-1]) {
        return false;
    }
    
}
return true;
}

