#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * addFirst(struct element * lista, int a){
    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = a;
    nowa -> next = lista;
    return nowa;
};

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

    lista = addFirst(lista, 2);

    struct element * temp = lista;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
