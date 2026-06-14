#include <stdio.h>
#include <stdlib.h>

int sumDiagonal(int n, int ** tab){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += tab[i][i];
    }
    return suma;
}

int main()
{
    int n = 3;
    int ** tab = malloc(n * sizeof(int *));
    for (int i = 0; i < n; i++){
        tab[i] = malloc(n * sizeof(int));
    }

    tab[0][0] = 2; tab[0][1] = 3; tab[0][2] = -3;
    tab[1][0] = 1; tab[1][1] = 4; tab[1][2] = 7;
    tab[2][0] = -3; tab[2][1] = -6; tab[2][2] = 11;

    printf("%d ", sumDiagonal(n, tab));
    return 0;
}
