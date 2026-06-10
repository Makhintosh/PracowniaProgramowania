#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void printOdd(struct element * lista){
    struct element * temp = lista -> next;
    while (temp != NULL){
        if (temp -> x % 2 != 0){
            printf("%d ", temp -> x);
        }
        temp = temp -> next;
    }
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 1;
    wsk2 -> x = 8
    ;
    wsk3 -> x = 9;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    printOdd(lista);
    return 0;
}
