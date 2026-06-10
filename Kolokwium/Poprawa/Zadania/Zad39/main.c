#include <stdio.h>
#include <stdlib.h>

struct element {
    float value;
    struct element * next;
};

void absAllWithoutHead(struct element * lista){
    if (lista == NULL){
        return;
    }
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> value < 0){
            temp -> value = temp -> value * -1;
        }
        temp = temp -> next;
    }
}

int main()
{
    // --- BUDOWANIE PRZYPADKU TESTOWEGO ---
    // Wartoœci: -4.5, 3.2, -8.0, 0.0
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));
    struct element * wsk4 = malloc(sizeof(struct element));

    wsk1 -> value = -4.5;
    wsk2 -> value = 3.2;
    wsk3 -> value = -8.0;
    wsk4 -> value = 0.0;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = wsk4;
    wsk4 -> next = NULL;

    struct element * lista = wsk1;

    absAllWithoutHead(lista);

    struct element * temp = lista;
    while (temp != NULL) {
        printf("%.1f -> ", temp -> value);
        temp = temp -> next;
    }
    printf("NULL\n");

    return 0;
}
