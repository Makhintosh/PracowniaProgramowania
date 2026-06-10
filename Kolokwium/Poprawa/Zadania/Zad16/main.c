#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumNegativeWithHead(struct element * lista){
    int suma = 0;
    struct element * temp = lista -> next;
    while (temp != NULL){
        if (temp -> x < 0){
            suma += temp -> x;
        }
        temp = temp -> next;
    }
    return suma;
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 3;
    wsk2 -> x = -4;
    wsk3 -> x = -5;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    printf("%d ", sumNegativeWithHead(lista));

    return 0;
}
