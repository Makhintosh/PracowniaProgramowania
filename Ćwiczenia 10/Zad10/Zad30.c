int findFirstDivisibleIndex(int p, int n, int numbers[]){
    for (int i = 0; i < n; i++){
        if (numbers[i] % p == 0){
            return i;
        }
    }
    return -1;
}
