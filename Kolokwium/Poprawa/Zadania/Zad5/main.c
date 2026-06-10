#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void printPos(struct element * lista){
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> x > 0){
            printf("%d ", temp -> x);
        }
        temp = temp -> next;
    }
}

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 4;
    wsk2 -> x = -10;
    wsk3 -> x = -12;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

    printPos(lista);
    return 0;
}
