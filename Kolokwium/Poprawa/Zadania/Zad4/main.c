#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void printListWithHead(struct element * lista){
    if (lista == NULL || lista -> next == NULL){
        printf("Pusta lista");
        return;
    }
    struct element * temp = lista -> next;
    while (temp != NULL){
        printf("%d ", temp -> x);
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
    wsk2 -> x = 2;
    wsk3 -> x = -13;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    printListWithHead(lista);

    return 0;
}
