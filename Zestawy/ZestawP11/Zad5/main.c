#include <stdio.h>
#include <stdlib.h>

struct element {
    int i;
    struct element * next;
};

int countGreater(struct element * lista, int n){
    if (lista -> next == NULL){
        return 0;
    }

    int count = 0;
    struct element * temp = lista -> next;
    while (temp != NULL){
        if (temp -> i > n){
            count++;
        }
        temp = temp -> next;
    }
    return count;
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));
    struct element * wsk4 = malloc(sizeof(struct element));

    wsk1 -> i = 3;
    wsk2 -> i = -4;
    wsk3 -> i = 5;
    wsk4 -> i = 8;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = wsk4;
    wsk4 -> next = NULL;

    printf("%d ", countGreater(lista, 1));
    return 0;
}
