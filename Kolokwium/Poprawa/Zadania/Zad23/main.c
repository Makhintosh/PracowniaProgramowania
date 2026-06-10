#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeSeccondLastWithoutHead(struct element * lista){
    if (lista == NULL || lista -> next == NULL){
        return lista;
    }
    if (lista -> next -> next == NULL){
        struct element * poczatek = lista -> next;
        free(lista);
        return poczatek;
    }
    struct element * temp = lista;
    while (temp -> next -> next -> next != NULL){
        temp = temp -> next;
    }
    struct element * doUsuniecia = temp -> next;
    temp -> next = doUsuniecia -> next;
    free(doUsuniecia);

    return lista;
}

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 10;
    wsk2 -> x = 20;
    wsk3 -> x = 30;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

    lista = removeSeccondLastWithoutHead(lista);

    struct element * temp = lista;
    while (temp != NULL) {
        printf("%d ", temp->x);
        temp = temp->next;
    }

    return 0;
}
