int countNegInd(int n, int tab[]){
    int count = 0;
    for (int i = 0; i < n; i += 2){
        if (tab[i] < 0){
            count++;
        }
    }
    return count;
}
