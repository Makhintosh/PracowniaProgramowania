#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node * next;
};

int equalOddSum(struct node * lista1, struct node * lista2){
    if (lista1 == NULL || lista1 -> next == NULL || lista2 == NULL || lista2 -> next == NULL){
        return 0;
    }
    int suma1 = 0;
    int suma2 = 0;
    struct node * temp1 = lista1 -> next;
    struct node * temp2 = lista2 -> next;
    while (temp1 != NULL){
        if (temp1 -> value % 2 != 0){
            suma1 += temp1 -> value;
        }
        temp1 = temp1 -> next;
    }
    while (temp2 != NULL){
        if (temp2 -> value % 2 != 0){
            suma2 += temp2 -> value;
        }
        temp2 = temp2 -> next;
    }
    if (suma1 == suma2){
        return 1;
    }
    return 0;
}

int main()
{
    struct node * lista1 = malloc(sizeof(struct node)); // G³owa
    struct node * l1_w1 = malloc(sizeof(struct node));
    struct node * l1_w2 = malloc(sizeof(struct node));
    struct node * l1_w3 = malloc(sizeof(struct node));

    l1_w1->value = 3;
    l1_w2->value = 4;
    l1_w3->value = 5;

    lista1->next = l1_w1;
    l1_w1->next = l1_w2;
    l1_w2->next = l1_w3;
    l1_w3->next = NULL;

    // --- BUDOWANIE LISTY 2: [G£OWA] -> 9 -> -1 -> 4 ---
    // Suma nieparzystych: 9 + (-1) = 8
    struct node * lista2 = malloc(sizeof(struct node)); // G³owa
    struct node * l2_w1 = malloc(sizeof(struct node));
    struct node * l2_w2 = malloc(sizeof(struct node));
    struct node * l2_w3 = malloc(sizeof(struct node));

    l2_w1->value = 9;
    l2_w2->value = -1;
    l2_w3->value = 4;

    lista2->next = l2_w1;
    l2_w1->next = l2_w2;
    l2_w2->next = l2_w3;
    l2_w3->next = NULL;

    // --- TESTOWANIE ---
    int wynik = equalOddSum(lista1, lista2);

    if (wynik == 1) {
        printf("Sukces: Sumy elementow nieparzystych sa rowne!\n");
    } else {
        printf("Sumy elementow nieparzystych sa rozne (lub listy sa puste).\n");
    }

    return 0;
}
