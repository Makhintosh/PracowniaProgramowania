void doubleOddElements(int n, int tab[]){
    for (int i = 0; i < n; i++){
        if (tab[i] % 2 != 0){
            tab[i] *= 2;
        }
    }
}
