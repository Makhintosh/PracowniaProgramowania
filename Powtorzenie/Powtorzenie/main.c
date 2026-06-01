#include <stdio.h>
#include <stdlib.h>

void reverseArr(int n, int *tab){
    for (int i = 0; i < n / 2; i++){
        int temp = *(tab + i);
        *(tab + i) = *(tab + n - i - 1);
        *(tab + n - i - 1) = temp;
    }
}

void printArrReversed(int n, int *tab){
    for (int i = 0; i < n; i++){
        printf("%d ", tab[n - 1];)
    }
}

int main()
{
    int tablica[] = {1, 2, 3, 4};
    int n = sizeof(tablica) / sizeof(int);
    reverseArr(n, tablica);
    for (int i = 0; i < n; i++){
        printf("%d", tablica[i]);
    }
    return 0;
}
