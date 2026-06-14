#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

void insertAfterOdd(struct element * lista){
    if (lista -> next == NULL){
        return;
    }

    struct element * temp = lista -> next;
    while (temp != NULL){
        if (temp -> x % 2 != 0){
            struct element * nowa = malloc(sizeof(struct element));
            nowa -> x = 0;
            nowa -> next = temp -> next;
            temp -> next = nowa;
            temp = temp -> next -> next;
        } else {
            temp = temp -> next;
        }
    }
}

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * w1 = malloc(sizeof(struct element)); w1->x = 6;
    struct element * w2 = malloc(sizeof(struct element)); w2->x = 3;
    struct element * w3 = malloc(sizeof(struct element)); w3->x = 8;
    struct element * w4 = malloc(sizeof(struct element)); w4->x = 5;

    lista->next = w1;
    w1->next = w2;
    w2->next = w3;
    w3->next = w4;
    w4->next = NULL;

    insertAfterOdd(lista);

    struct element * temp = lista -> next;
    while(temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
