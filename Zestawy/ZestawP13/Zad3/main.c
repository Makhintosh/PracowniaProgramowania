#include <stdio.h>
#include <stdlib.h>

int ** transpose(int n, int m, int ** tab){
    int ** wynik = malloc(m * sizeof(int *));
    for (int i = 0; i < m; i++){
        wynik[i] = malloc(n * sizeof(int));
    }

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            wynik[i][j] = tab[j][i];
        }
    }
    return wynik;
}

int main()
{
    int n = 2, m = 3;
    int **tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++) {
        tab[i] = malloc(m * sizeof(int));
    }

    tab[0][0] = 1; tab[0][1] = 2; tab[0][2] = 3;
    tab[1][0] = 4; tab[1][1] = 5; tab[1][2] = 6;

    int ** wynik = transpose(n, m, tab);

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("%d ", wynik[i][j]);
        }
        printf("\n");
    }
    return 0;
}
