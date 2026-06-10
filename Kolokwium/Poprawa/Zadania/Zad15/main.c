#include <stdio.h>
#include <stdlib.h>

struct element {
    int x;
    struct element * next;
};

int sumOddWithoutHead(struct element * lista){
    struct element * temp = lista;
    int suma = 0;
    while (temp != NULL){
        if (temp -> x % 2 != 0){
            suma += temp -> x;
        }
        temp = temp -> next;
    }
    return suma;
}

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

    printf("%d ", sumOddWithoutHead(lista));
    return 0;
}
