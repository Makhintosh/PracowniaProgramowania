int maxIdx(int n, int tab[]){
    int max_index = 0;
    for (int i = 1; i < n; i++){
        if (tab[i] > tab[max_index]){
            max_index = i;
        }
    }
    return max_index;
}
