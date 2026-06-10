#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeLastWithoutHead(struct element * lista){
    if (lista == NULL){
        return NULL;
    }
    if (lista -> next == NULL){
        free(lista);
        return NULL;
    }
    struct element * temp = lista;
    while (temp -> next -> next != NULL){
        temp = temp -> next;
    }
    free(temp -> next);
    temp -> next = NULL;

    return lista;
}

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1->x = 10;
    wsk2->x = 20;
    wsk3->x = 30;

    wsk1->next = wsk2;
    wsk2->next = wsk3;
    wsk3->next = NULL;

    struct element * lista = wsk1;

    lista = removeLastWithoutHead(lista);

    struct element * temp = lista;
    while (temp != NULL) {
        printf("%d ", temp->x);
        temp = temp->next;
    }
    return 0;
}
