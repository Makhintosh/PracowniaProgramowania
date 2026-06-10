#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

struct element * lastPositiveWithHead(struct element * lista){
    struct element * ostatniPozytywny = NULL;
    struct element * temp = lista -> next;
    if (lista -> next == NULL) return ostatniPozytywny;
    while (temp != NULL){
        if (temp -> x > 0){
            ostatniPozytywny = temp;
        }
        temp = temp -> next;
    }
    return ostatniPozytywny;
};

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

    struct element * wynik = lastPositiveWithHead(lista);
    if (wynik != NULL){
        printf("%d", wynik -> x);
    } else {
        printf("NULL");
    }
    return 0;
}
