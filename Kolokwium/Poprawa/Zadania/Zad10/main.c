#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * addFirst(struct element * lista, int a){
    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = a;
    nowa -> next = lista -> next;
    lista -> next = nowa;
    return lista;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 3;
    wsk2 -> x = 4;
    wsk3 -> x = 5;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    lista = addFirst(lista, 1);

    struct element * temp = lista -> next;
    while(temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
