#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countVowels(char * str){
    int count = 0;
    int i = 0;
    while (str[i] != '\0'){
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'y'){
            count++;
        }
        i++;
    }
    return count;
}

int diagonalSum(int n, int tab[n][n]){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i][i];
    }
    return suma;
}

struct Produkt{
    char * name;
    float price;
};

int mostExpensive(struct Produkt arr[], int n){
    int mostIndex = 0;
    float mostPrice = 0;
    for (int i = 0; i < n; i++){
        if (arr[i].price > mostPrice){
            mostPrice = arr[i].price;
            mostIndex = i;
        }
    }
    return mostIndex;
}

struct element{
    int x;
    struct element * next;
};

int containsValue(struct element * lista, int target){
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> x == target){
            return 1;
        }
        temp = temp -> next;
    }
    return 0;
}

int main()
{
    char * napis = "programowanie";
    printf("Zadanie 1: %d\n", countVowels(napis));

    int tablica[3][3] = {
        {4, 1, 2},
        {8, 5, 3},
        {0, 9, 7}
    };
    printf("Zadanie 2: %d\n", diagonalSum(3, tablica));

    struct Produkt produkty[] = {
        {"Myszka", 120.50},
        {"Klawiatura", 350.00},
        {"Sluchawki", 299.99}
    };
    printf("Zadanie 3: %d\n", mostExpensive(produkty, 3));

    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));
    struct element * wsk4 = malloc(sizeof(struct element));

    wsk1 -> x = 8;
    wsk2 -> x = 15;
    wsk3 -> x = 3;
    wsk4 -> x = 10;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = wsk4;
    wsk4 -> next = NULL;

    struct element * lista = wsk1;

    printf("Zadanie 4: %d\n", containsValue(lista, 3));

    return 0;
}
