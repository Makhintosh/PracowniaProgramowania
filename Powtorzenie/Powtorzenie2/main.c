#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Zad 1

char * copyEveryThrid(char * str){
    int i = 0, j = 0;
    char * wynik = malloc(sizeof(char) * strlen(str) / 3 + 1);
    while (str[i] != '\0'){
        if((i + 1) % 3 == 0){
            wynik[j] = str[i];
            j++;
        }
        i++;
    }
    wynik[j] = '\0';
    return wynik;
}

//Zad 2

int strDig(char * str){
    int i = 0;
    int count = 0;
    while (str[i] != '\0'){
        if (isdigit(str[i])){
            count += 2;
        } else {
            count++;
        }
        i++;
    }
    return count;
}

//Zad 3

void flipDiag(int n, int m, int arr[n][m]){
    if (n != m){
        return;
    }
    int row = 0, col = 0;
    while (row < (n/2)){
        int temp = *(*(arr + row) + col);
        *(*(arr + row) + col) = *(*(arr + n - row - 1) + m - col - 1);
        *(*(arr + n - row - 1) + m - col - 1) = temp;

        row++;
        col++;
    }
}

int main()
{

//    Zad 1

//    char * str = "Siema eniu";
//    char * nowa = copyEveryThrid(str);
//    printf("%s\n", nowa);

//    Zad 2

//    char * str = "jdET";
//    printf("Ilosc znakow: %d", strDig(str));
//    return 0;

//    Zad 3

    int n = 4;
    int m = 4;

    int matrix = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9,  10, 11, 12},
        {13, 14, 15, 16}
    };


    flipDiag(n, m, matrix);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", *(*(matrix + i) + j));
        }
        printf("\n");
    }
}
