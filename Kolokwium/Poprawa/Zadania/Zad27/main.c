#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct node {
    int i;
    struct node * next;
};

void printPerfectSquares(struct node * lista){
    struct node * temp = lista;
    while (temp != NULL){
        if (temp -> i >= 0){
            int pierwiastek = sqrt(temp -> i);

            if (pierwiastek * pierwiastek == temp -> i){
                printf("%d\n", temp -> i);
            }
        }
        temp = temp -> next;
    }
}

int main()
{
    struct node * wsk1 = malloc(sizeof(struct node));
    struct node * wsk2 = malloc(sizeof(struct node));
    struct node * wsk3 = malloc(sizeof(struct node));
    struct node * wsk4 = malloc(sizeof(struct node));
    struct node * wsk5 = malloc(sizeof(struct node));
    struct node * wsk6 = malloc(sizeof(struct node));
    struct node * wsk7 = malloc(sizeof(struct node));

    wsk1 -> i = 4;
    wsk2 -> i = 5;
    wsk3 -> i = 6;
    wsk4 -> i = -34;
    wsk5 -> i = 0;
    wsk6 -> i = 25;
    wsk7 -> i = 11;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = wsk4;
    wsk4 -> next = wsk5;
    wsk5 -> next = wsk6;
    wsk6 -> next = wsk7;
    wsk7 -> next = NULL;

    struct node * lista = wsk1;

    printPerfectSquares(lista);
    return 0;
}
