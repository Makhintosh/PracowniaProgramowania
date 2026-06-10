#include <stdio.h>
#include <stdlib.h>

struct node {
    int y;
    struct node * next;
};

void addTwoFirstWithHead(struct node * lista, int a, int b){
    if (lista == NULL){
        return;
    }
    struct node * nowa1 = malloc(sizeof(struct node));
    struct node * nowa2 = malloc(sizeof(struct node));

    struct node * temp = lista -> next;

    nowa1 -> y = a;
    nowa2 -> y = b;

    lista -> next = nowa1;
    nowa1 -> next = nowa2;
    nowa2 -> next = temp;
}

int main()
{
    return 0;
}
