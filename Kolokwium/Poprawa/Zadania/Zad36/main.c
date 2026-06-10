#include <stdio.h>
#include <stdlib.h>

struct elem {
    int x;
    struct elem * next;
};

void doublePositive(struct elem * lista){
    if (lista == NULL){
        return;
    }
    struct elem * temp = lista;
    while (temp != NULL){
        if (temp -> x > 0){
            struct elem * nowa = malloc(sizeof(struct elem));
            nowa -> x = temp -> x;
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
    struct elem * wsk1 = malloc(sizeof(struct elem));
    struct elem * wsk2 = malloc(sizeof(struct elem));
    struct elem * wsk3 = malloc(sizeof(struct elem));

    wsk1 -> x = 4;
    wsk2 -> x = -5;
    wsk3 -> x = 6;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct elem * lista = wsk1;

    doublePositive(lista);

    printf("Po podwojeniu dodatnich:    ");
    struct elem * temp = lista;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    printf("\n");
    return 0;
}
