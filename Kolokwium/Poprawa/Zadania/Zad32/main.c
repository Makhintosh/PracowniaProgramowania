#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

int equalLength(struct node * lista1, struct node * lista2){
    int lenLista1 = 0;
    int lenLista2 = 0;
    if (lista1 == NULL || lista2 == NULL){
        return 0;
    }

    struct node * temp1 = lista1;
    struct node * temp2 = lista2;
    while (temp1 != NULL){
        temp1 = temp1 -> next;
        lenLista1++;
    }
    while (temp2 != NULL){
        temp2 = temp2 -> next;
        lenLista2++;
    }
    if (lenLista1 == lenLista2){
        return 1;
    }
    return 0;
}

int main()
{
    struct node * l1_wsk1 = malloc(sizeof(struct node));
    struct node * l1_wsk2 = malloc(sizeof(struct node));
    struct node * l1_wsk3 = malloc(sizeof(struct node));

    l1_wsk1->a = 10; l1_wsk2->a = 20; l1_wsk3->a = 30;
    l1_wsk1->next = l1_wsk2; l1_wsk2->next = l1_wsk3; l1_wsk3->next = NULL;

    struct node * lista1 = l1_wsk1;

    // --- BUDUJEMY LISTÊ 2 (D³ugoœæ: 3) ---
    struct node * l2_wsk1 = malloc(sizeof(struct node));
    struct node * l2_wsk2 = malloc(sizeof(struct node));
    struct node * l2_wsk3 = malloc(sizeof(struct node));

    l2_wsk1->a = 99; l2_wsk2->a = 88; l2_wsk3->a = 77;
    l2_wsk1->next = l2_wsk2; l2_wsk2->next = l2_wsk3; l2_wsk3->next = NULL;

    struct node * lista2 = l2_wsk1;

    // --- TESTOWANIE ---
    if (equalLength(lista1, lista2) == 1) {
        printf("Listy sa rownej dlugosci!\n");
    } else {
        printf("Listy maja rozna dlugosc (lub sa puste).\n");
    }
    return 0;
}
