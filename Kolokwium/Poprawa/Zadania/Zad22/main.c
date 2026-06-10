#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeLastWithHead(struct element * lista){
    if (lista -> next == NULL){
        printf("Lista jest pusta");
        return;
    }
    if (lista -> next -> next == NULL){
        free(lista -> next);
        lista -> next = NULL;
        return;
    }
    struct element * temp = lista -> next;
    while (temp -> next -> next != NULL){
        temp = temp -> next;
    }

    free(temp -> next);
    temp -> next = NULL;
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

    removeLastWithHead(lista);

    struct element * temp = lista -> next;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
