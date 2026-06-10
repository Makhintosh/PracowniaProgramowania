#include <stdio.h>
#include <stdlib.h>

struct node {
    int a;
    struct node * next;
};

struct node * addTwoFirstWithoutHead(struct node * lista, int a, int b){
    struct node * nowa1 = malloc(sizeof(struct node));
    struct node * nowa2 = malloc(sizeof(struct node));

    nowa1 -> a = a;
    nowa2 -> a = b;

    nowa1 -> next = nowa2;
    nowa2 -> next = lista;

    return nowa1;

};
void printList(struct node * lista) {
    struct node * temp = lista;
    if (temp == NULL) {
        printf("Pusta lista (NULL)\n");
        return;
    }
    while (temp != NULL) {
        printf("%d -> ", temp -> a);
        temp = temp -> next;
    }
    printf("NULL\n");
}

int main()
{
    printf("=== TEST 1: Dodawanie do listy z elementami ===\n");

    // Tworzymy bazow¹ listê: 30 -> 40 -> NULL
    struct node * wsk1 = malloc(sizeof(struct node));
    struct node * wsk2 = malloc(sizeof(struct node));
    wsk1 -> a = 30;
    wsk2 -> a = 40;
    wsk1 -> next = wsk2;
    wsk2 -> next = NULL;

    struct node * lista1 = wsk1;

    printf("Lista przed: ");
    printList(lista1);

    // Wywo³anie Twojej funkcji (dodajemy 10 i 20 na pocz¹tek)
    lista1 = addTwoFirstWithoutHead(lista1, 10, 20);

    printf("Lista po:    ");
    printList(lista1); // Powinno byæ: 10 -> 20 -> 30 -> 40 -> NULL


    printf("\n=== TEST 2: Dodawanie do calkowicie pustej listy ===\n");

    struct node * lista2 = NULL; // Lista jest pusta

    printf("Lista przed: ");
    printList(lista2);

    // Wywo³anie Twojej funkcji dla NULL-a
    lista2 = addTwoFirstWithoutHead(lista2, 50, 60);

    printf("Lista po:    ");
    printList(lista2); // Powinno byæ: 50 -> 60 -> NULL
    return 0;
}
