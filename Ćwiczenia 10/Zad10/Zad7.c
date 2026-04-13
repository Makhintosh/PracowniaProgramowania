int maxValue(int n, int tab[]){
    int max = tab[0];
    for (int i = 1; i < n; i++){
        if (tab[i] > max){
            max = tab[i];
        }
    }
    return max;
}
