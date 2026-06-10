#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

int main()
{
    struct element * lista = malloc(sizeof(struct element));
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 4;
    wsk2 -> x = 5;
    wsk3 -> x = -12;

    lista -> next = wsk1;
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * temp = lista -> next;
    while(temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
