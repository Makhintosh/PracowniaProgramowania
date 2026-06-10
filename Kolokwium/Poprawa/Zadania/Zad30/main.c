#include <stdio.h>
#include <stdlib.h>

struct elem {
    int a;
    struct elem * next;
};

void duplicateLastWithHead(struct elem * lista){
    if (lista == NULL || lista -> next == NULL){
        return;
    }
    struct elem * temp = lista -> next;
    while (temp -> next != NULL){
        temp = temp -> next;
    }
    struct elem * nowa = malloc(sizeof(struct elem));
    nowa -> a = temp -> a;
    temp -> next = nowa;
    nowa -> next = NULL;
}

int main()
{
    struct elem * lista = malloc(sizeof(struct elem)); // G³owa
    struct elem * wsk1 = malloc(sizeof(struct elem));
    struct elem * wsk2 = malloc(sizeof(struct elem));
    struct elem * wsk3 = malloc(sizeof(struct elem));

    // Wype³nianie danych
    wsk1 -> a = 10;
    wsk2 -> a = 20;
    wsk3 -> a = 30; // To jest nasz ostatni element do zdublowania

    // £¹czenie wagoników
    lista -> next = wsk1; // G³owa wskazuje na pierwszy element
    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    duplicateLastWithHead(lista);

    struct elem * temp = lista -> next;
    while (temp != NULL){
        printf("%d ", temp -> a);
        temp = temp -> next;
    }
    return 0;
}
