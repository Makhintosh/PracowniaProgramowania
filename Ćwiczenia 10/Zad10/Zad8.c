int minValue(int n, int tab[]){
    int min = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] < min){
            min = tab[i];
        }
    }
    return min;
}

