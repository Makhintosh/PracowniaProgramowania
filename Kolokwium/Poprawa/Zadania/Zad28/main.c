#include <stdio.h>
#include <stdlib.h>

struct node{
    double x;
    struct node * next;
};

double findMin(struct node * lista){
    if (lista == NULL){
        return 0;
    }
    struct node * temp = lista;
    double minVal = temp -> x;
    while (temp != NULL){
        if (temp -> x < minVal){
            minVal = temp -> x;
        }
        temp = temp -> next;
    }
    return minVal;
}

int main()
{
    struct node * wsk1 = malloc(sizeof(struct node));
    struct node * wsk2 = malloc(sizeof(struct node));
    struct node * wsk3 = malloc(sizeof(struct node));

    wsk1 -> x = 10;
    wsk2 -> x = 20;
    wsk3 -> x = 30;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct node * lista = wsk1;

    printf("Najmniejsza liczba: %f", findMin(lista));
    return 0;
}
