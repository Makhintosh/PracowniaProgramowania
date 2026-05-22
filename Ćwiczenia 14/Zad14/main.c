#include <stdio.h>
#include <stdlib.h>

//Zad 1

struct element{
    int x;
    struct element * next;
};

//Zad 3

void printListWithoutHead(struct element * lista){
    if (lista == NULL){
        printf("Lista jest pusta");
        return;
    }
    struct element * temp = lista;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
}

//Zad 4

void printListWithHead(struct element * lista){
    if (lista == NULL | lista -> next == NULL){
        printf("Lista jest pusta");
        return;
    }
    struct element * temp = lista -> next;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
}

//Zad 5

void printPos(struct element * lista){

}

int main()
{
//    Zad 1

//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    wsk1 -> x = 4;
//    wsk2 -> x = 5;
//    wsk3 -> x = -12;
//
//    wsk1 -> next = wsk2;
//    wsk2 -> next = wsk3;
//    wsk3 -> next = NULL;
//
//    struct element * lista = wsk1;
//
//    struct element * temp = lista;
//    while (temp != NULL){
//        printf("%d ", temp->x);
//        temp = temp -> next;
//    }
//
//    free(wsk1);
//    free(wsk2);
//    free(wsk3);

//    Zad 2

//    struct element * lista = malloc(sizeof(struct element));
//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    wsk1 -> x = 4;
//    wsk2 -> x = 5;
//    wsk3 -> x = -12;
//
//    lista -> next = wsk1;
//    wsk1 -> next = wsk2;
//    wsk2 -> next = wsk3;
//    wsk3 -> next = NULL;
//
//    struct element * temp = lista -> next;
//
//    while (temp != NULL){
//        printf("%d ", temp->x);
//        temp = temp -> next;
//    }
//
//    free(wsk1);
//    free(wsk2);
//    free(wsk3);
//    free(lista);

//    Zad 3

//    struct element * pustaLista = NULL;
//    printListWithoutHead(pustaLista);
//    printf("\n");
//
//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    wsk1 -> x = 2;
//    wsk2 -> x = 1;
//    wsk3 -> x = 3;
//
//    wsk1 -> next = wsk2;
//    wsk2 -> next = wsk3;
//    wsk3 -> next = NULL;
//
//    printListWithoutHead(wsk1);
//
//    free(wsk1);
//    free(wsk2);
//    free(wsk3);

//    Zad 4

//    struct element * pustaLista = malloc(sizeof(struct element));
//    pustaLista -> next = NULL;
//    printListWithHead(pustaLista);
//    printf("\n");
//
//    struct element * lista = malloc(sizeof(struct element));
//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    wsk1 -> x = 7;
//    wsk2 -> x = 19;
//    wsk3 -> x = -92;
//
//    lista -> next = wsk1;
//    wsk1 -> next = wsk2;
//    wsk2 -> next = wsk3;
//    wsk3 -> next = NULL;
//
//    printListWithHead(lista);
//
//    free(pustaLista);
//    free(lista);
//    free(wsk1);
//    free(wsk2);
//    free(wsk3);

    return 0;
}

