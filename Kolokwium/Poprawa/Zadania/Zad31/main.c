#include <stdio.h>
#include <stdlib.h>

struct node {
    int i;
    struct node * next;
};

int equalLast(struct node * lista1, struct node * lista2){
    if (lista1 == NULL || lista1 -> next == NULL || lista2 == NULL || lista2 -> next == NULL){
        return 0;
    }
    struct node * temp1 = lista1 -> next;
    struct node * temp2 = lista2 -> next;
    while (temp1 -> next != NULL){
        temp1 = temp1 -> next;
    }
    while (temp2 -> next != NULL){
        temp2 = temp2 -> next;
    }
    if (temp1 -> i == temp2 -> i){
        return 1;
    }
    return 0;
}

int main()
{
    struct node * lista1 = malloc(sizeof(struct node)); // G³owa
    struct node * l1_w1 = malloc(sizeof(struct node));
    struct node * l1_w2 = malloc(sizeof(struct node));

    l1_w1 -> i = 5;
    l1_w2 -> i = 100; // Ostatni element pierwszej listy

    lista1 -> next = l1_w1;
    l1_w1 -> next = l1_w2;
    l1_w2 -> next = NULL;

    // --- TWORZENIE LISTY 2 ---
    struct node * lista2 = malloc(sizeof(struct node)); // G³owa
    struct node * l2_w1 = malloc(sizeof(struct node));
    struct node * l2_w2 = malloc(sizeof(struct node));
    struct node * l2_w3 = malloc(sizeof(struct node));

    l2_w1 -> i = 8;
    l2_w2 -> i = 12;
    l2_w3 -> i = 100; // Ostatni element drugiej listy

    lista2 -> next = l2_w1;
    l2_w1 -> next = l2_w2;
    l2_w2 -> next = l2_w3;
    l2_w3 -> next = NULL;

    // --- TESTOWANIE ---
    int wynik = equalLast(lista1, lista2);

    if (wynik == 1) {
        printf("Ostatnie elementy obu list sa rowne!\n");
    } else {
        printf("Ostatnie elementy sa rozne (lub ktores z list sa puste).\n");
    }
    return 0;
}
