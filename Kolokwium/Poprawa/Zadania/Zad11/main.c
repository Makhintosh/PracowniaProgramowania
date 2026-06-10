#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void addLast(struct element * lista, int a){
    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = a;

    if (lista == NULL) return;

    struct element * temp = lista;
    while (temp -> next != NULL){
        temp = temp -> next;
    }
    if (temp != NULL){
        nowa -> next = NULL;
        temp -> next = nowa;
    }
}

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 4;
    wsk2 -> x = 5;
    wsk3 -> x = -12;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

    addLast(lista, 10);

    struct element * temp = lista;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
