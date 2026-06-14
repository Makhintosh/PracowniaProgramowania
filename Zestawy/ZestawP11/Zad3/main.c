#include <stdio.h>
#include <stdlib.h>

int * colMinima(int n, int m, int ** tab){
    int * wynik = malloc(m * sizeof(int));
    if (wynik == NULL){
        return NULL;
    }

    for (int j = 0; j < m; j++){
        int min = tab[0][j];
        for (int i = 0; i < n; i++){
            if (tab[i][j] < min){
                min = tab[i][j];
            }
        }
        wynik[j] = min;
    }
    return wynik;
}

int main()
{
    int n = 3, m = 3;

    int ** tab = malloc(n * sizeof(int*));
    for (int i = 0; i < n; i++){
        tab[i] = malloc(m * sizeof(int));
    }

    tab[0][0] = 1;  tab[0][1] = 7;  tab[0][2] = 3;
    tab[1][0] = 4;  tab[1][1] = 2;  tab[1][2] = 6;
    tab[2][0] = -1; tab[2][1] = -5; tab[2][2] = -2;

    int * minima = colMinima(n, m, tab);

    for (int j = 0; j < m; j++){
        printf("%d ", minima[j]);
    }

    return 0;
}
