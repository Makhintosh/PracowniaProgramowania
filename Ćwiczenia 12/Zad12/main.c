#include <stdio.h>
#include <stdlib.h>

//Zad 1

int sumMatrix(int n, int m, int matrix[n][m]){
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum += matrix[i][j];
        }
    }
    return sum;
}

//Zad 2

int sumArray(int n, int m, int **tablica){
    int sum = 0;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            sum += tablica[i][j];
        }
    }
    return sum;
}

//Zad 3

int maxRowIdx(int n, int m, int arr[n][m]){
    int max_val = arr[0][0];
    int best_row = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] > max_val){
                max_val = arr[i][j];
                best_row = i;
            }
        }
    }
    return best_row;
}

//Zad 4

int minColIdx(int n, int m, int **arr){
    int min_val = arr[0][0];
    int best_col = 0;

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            if (arr[i][j] < min_val){
                min_val = arr[i][j];
                best_col = j;
            } else if (arr[i][j] == min_val && j < best_col){
                best_col = j;
            }
        }
    }
    return best_col;
}

int main()
{
//    Zad 1

//    int n = 3, m = 3;
//    int matrix[3][3] = {
//        {1, 2, 3},
//        {4, 5, 6},
//        {7, 8, 9}
//    };
//
//    int wynik = sumMatrix(n, m, matrix);
//    printf("%d", wynik);

//    Zad 2

//    int n = 2, m = 4;
//    int **arr = (int **)malloc(n * sizeof(int *));
//    for (int i = 0; i < n; i++){
//        arr[i] = (int *)malloc(m * sizeof(int));
//    }
//
//    int counter = 1;
//    for (int i = 0; i < n; i++){
//        for (int j = 0; j < m; j++){
//            arr[i][j] = counter++;
//        }
//    }
//
//    int wynik = sumArray(n, m, arr);
//    printf("%d", wynik);
//
//    free(arr);

//    Zad 3

//    int n = 4, m = 3;
//    int arr[4][3] = {
//        {1, 5, 2},
//        {4, 9, 5},
//        {9, 1, 8},
//        {2, 4, 6},
//    };
//
//    int wynik = maxRowIdx(n, m, arr);
//    printf("%d", wynik);

//    Zad 4

    int n = 3, m = 4;
    int **arr = (int *)malloc(m * sizeof(int));

    return 0;
}
