#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * removeAllWithoutHead(struct element * lista){
    if (lista == NULL) return lista;
    struct element * temp = lista;
    struct element * nastepny = NULL;
    while (temp != NULL){
        nastepny = temp -> next;
        free(temp);
        temp = nastepny;
    }
    return NULL;
};

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

    lista = removeAllWithoutHead(lista);

    if (lista == NULL){
        printf("Lista jest pusta");
    } else {
        struct element * temp = lista;
        while (temp != NULL) {
            printf("%d ", temp->x);
            temp = temp->next;
        }
    }

    return 0;
}
