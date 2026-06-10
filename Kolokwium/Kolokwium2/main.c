#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hasDigit(char * str){
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] >= 0 && str[i] <= 9){
            return 1;
        }
        i++;
    }
    return 0;
}

int maxSumRows(int rows, int cols, int tab[rows][cols]){
    int maxIndex = 0;
    int maxSuma = 0;
    for (int i = 0; i < rows; i++){
        int suma = 0;
        for (int j = 0; j < cols; j++){
            suma += tab[i][j];
        }
        if (suma > maxSuma){
            maxSuma = suma;
            maxIndex = i;
        }
    }
    return maxIndex;
}

struct Car{
    char * brand;
    int rocznik;
    float mileage;
};

int newestCar(struct Car arr[], int n){
    int index = 0;
    int newest = 0;
    for (int i = 0; i < n; i++){
        if (arr[i].rocznik > newest){
            newest = arr[i].rocznik;
            index = i;
        }
    }
    return index;
}

struct element{
    int x;
    struct element * next;
};

int allPositive(struct element * lista){
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> x < 0){
            return 0;
        }
        temp = temp -> next;
    }
    return 1;
}

int main()
{
    char * napis = "Wiosna";
    printf("Zadanie 1: %d\n", hasDigit(napis));

    int tab[3][2] = {
        {1, 2},
        {10, 5},
        {4, 4}
    };
    printf("Zadanie 2: %d\n", maxSumRows(3, 2, tab));

    struct Car garaz[] = {
        {"Toyota", 2010, 150000.5},
        {"Ford", 2022, 12000.0},
        {"Honda", 2016, 65000.2}
    };
    printf("Zadanie 3: %d\n", newestCar(garaz, 3));

    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));
    struct element * wsk4 = malloc(sizeof(struct element));

    wsk1 -> x = 5;
    wsk2 -> x = 12;
    wsk3 -> x = -8;
    wsk4 -> x = 20;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = wsk4;
    wsk4 -> next = NULL;

    struct element * lista = wsk1;

    printf("Zadanie 4: %d\n", allPositive(lista));

    return 0;
}

