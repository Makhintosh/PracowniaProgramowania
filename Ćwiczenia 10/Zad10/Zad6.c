void reverseArr(int n, int tab[]){
    for (int i = 0; i < n / 2; i++){
        int temp = tab[i];
        tab[i] = tab[n - 1 - i];
        tab[n - 1 - i] = temp;
    }
}
