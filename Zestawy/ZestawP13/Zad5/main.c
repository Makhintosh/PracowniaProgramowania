#include <stdio.h>
#include <stdlib.h>

struct elem{
    int x;
    struct elem * next;
};

int sumPositive(struct elem * lista){
    if (lista == NULL){
        return 0;
    }

    int suma = 0;
    struct elem * temp = lista;
    while (temp != NULL){
        if (temp -> x > 0){
            suma += temp -> x;
        }
        temp = temp -> next;
    }
    return suma;
}

int main()
{
    struct elem * w1 = malloc(sizeof(struct elem)); w1->x = 3;
    struct elem * w2 = malloc(sizeof(struct elem)); w2->x = -4;
    struct elem * w3 = malloc(sizeof(struct elem)); w3->x = 5;
    struct elem * w4 = malloc(sizeof(struct elem)); w4->x = -1;
    struct elem * w5 = malloc(sizeof(struct elem)); w5->x = 2;

    w1->next = w2;
    w2->next = w3;
    w3->next = w4;
    w4->next = w5;
    w5->next = NULL;

    struct elem * lista = w1;

    printf("Suma elementow dodatnich: %d\n", sumPositive(lista));
    return 0;
}
