#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

void removeSeccondLastWithHead(struct element * lista){
    if (lista -> next == NULL || lista -> next -> next == NULL){
        return;
    }
    struct element * temp = lista;
    while (temp -> next -> next -> next != NULL){
        temp = temp -> next;
    }
    struct element * doUsuniecia = temp -> next;
    temp -> next = doUsuniecia -> next;
    free(doUsuniecia);
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 3;
    wsk2 -> x = -4;
    wsk3 -> x = 5;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    removeSeccondLastWithHead(lista);

    struct element * temp = lista -> next;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
