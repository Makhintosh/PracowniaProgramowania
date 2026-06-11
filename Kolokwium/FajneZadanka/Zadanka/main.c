#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * removeFirstOccurrence(struct element * lista, int target){
    if (lista == NULL){
        return NULL;
    }
    if (lista -> x == target){
        struct element * doUsuniecia = lista;
        lista = doUsuniecia -> next;
        free(doUsuniecia);
        return lista;
    }
    struct element * temp = lista;
    while (temp -> next != NULL && temp -> next -> x != target){
        temp = temp -> next;
    }
    if (temp == NULL){
        return lista;
    }
    struct element * doUsuniecia = temp -> next;
    temp -> next = doUsuniecia -> next;
    free(doUsuniecia);
    return lista;
};

struct element * insertAtPosition(struct element * lista, int pos, int value){
    if (pos < 0){
        return lista;
    }

    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = value;

    if (pos == 0 || lista == NULL){
        nowa -> next = lista;
        return nowa;
    }

    int count = 0;
    struct element * temp = lista;
    while (temp -> next != NULL && count != pos - 1){
        temp = temp -> next;
        count++;
    }
    nowa -> next = temp -> next;
    temp -> next = nowa;

    return lista;

};

struct element * removeAllEven(struct element * lista){
    if (lista == NULL){
        return NULL;
    }

    while (lista != NULL && lista -> x % 2 == 0){
        struct element * doUsuniecia = lista;
        lista = lista -> next;
        free(doUsuniecia);
    }

    if (lista == NULL){
        return NULL;
    }

    struct element * temp = lista;

    while (temp -> next != NULL){
        if (temp -> next -> x % 2 == 0){
            struct element * doUsuniecia = temp -> next;
            temp -> next = doUsuniecia -> next;
            free(doUsuniecia);
        } else {
            temp = temp -> next;
        }

    }
    return lista;
};

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 5;
    wsk2 -> x = 10;
    wsk3 -> x = 15;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

    lista = removeFirstOccurrence(lista, 10);
    lista = insertAtPosition(lista, 5, 2);
    lista = removeAllEven(lista);

    if (lista == NULL){
        printf("Lista jest pusta");
    } else {
         struct element * temp = lista;
        while (temp != NULL){
            printf("%d ", temp -> x);
            temp = temp -> next;
        }
    }

    return 0;
}
