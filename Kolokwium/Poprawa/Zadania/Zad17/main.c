#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * lastEvenWithoutHead(struct element * lista){
    struct element * ostatniParzysty = NULL;
    struct element * temp = lista;
    if (lista == NULL) return ostatniParzysty;
    while (temp != NULL){
        if (temp -> x % 2 == 0){
            ostatniParzysty = temp;
        }
        temp = temp -> next;
    }
    return ostatniParzysty;
};

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 4;
    wsk2 -> x = 5;
    wsk3 -> x = 3;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

    struct element * wynik = lastEvenWithoutHead(lista);

    if (wynik != NULL){
        printf("%d", wynik -> x);
    } else {
        printf("NULL");
    }
    return 0;
}
