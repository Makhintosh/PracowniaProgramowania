int sumSquares(unsigned int n, int tab[]){
    int sum = 0;
    for (int i = 0; i < n; i++){
        sum += tab[i] * tab[i];
    }
    return sum;
}

