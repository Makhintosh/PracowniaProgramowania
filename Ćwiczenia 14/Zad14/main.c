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
    if (lista == NULL || lista -> next == NULL){
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
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> x > 0){
            printf("%d ", temp -> x);
        }
        temp = temp -> next;
    }
}

//Zad 6

void printOdd(struct element * lista){
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> x % 2 != 0){
            printf("%d ", temp -> x);
        }
        temp = temp -> next;
    }
}

//Zad 7

struct element * createNoHead(){
    struct element * lista == NULL;
    return lista;
};

//Zad 8

struct element * createWithHead(){
    struct element * lista = malloc(sizeof(struct element));
    lista -> next = NULL;
    return lista;
};

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

//    Zad 5

//    struct element * lista = NULL;
//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    wsk1 -> x = 4;
//    wsk1 -> next = NULL;
//    lista = wsk1;
//
//    wsk2 -> x = -19;
//    wsk2 -> next = lista;
//    lista = wsk2;
//
//    wsk3 -> x = 8;
//    wsk3 -> next = lista;
//    lista = wsk3;
//
//    printPos(lista);

//    Zad 6

//    struct element * lista = malloc(sizeof(struct element));
//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//
//    lista -> next = wsk1;
//
//    wsk1 -> x = 4;
//    wsk1 -> next = wsk2;
//
//    wsk2 -> x = 7;
//    wsk2 -> next = wsk3;
//
//    wsk3 -> x = 9;
//    wsk3 -> next = NULL;
//
//    printOdd(lista);

//    Zad 7

//    struct element * lista = createNoHead();
//
//    if (lista == NULL){
//        printf("Pusta lista zosta³a stworzona");
//    } else {
//        printf("Coœ posz³o nie tak");
//    }

//    Zad 8

//    struct element * lista = createWithHead();
//
//    if (lista != NULL && lista -> next == NULL){
//        printf("Lista poprawnie utworzona")
//    } else {
//        printf("Coœ posz³o nie tak");
//    }



    return 0;
}

