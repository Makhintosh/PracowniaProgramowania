int minIdxMax(int n, int tab[]){
    int min_index = 0;
    for (int i = 1; i < n; i++){
        if (tab[i] <= tab[min_index]){
            min_index = i;
        }
    }
    return min_index;
}
