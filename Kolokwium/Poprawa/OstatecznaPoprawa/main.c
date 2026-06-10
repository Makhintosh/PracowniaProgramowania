#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * dodajPoczatek(struct element * lista, int nowyElement){
    struct element * nowy = malloc(sizeof(struct element));
    nowy -> x = nowyElement;

    nowy -> next = lista;
    return nowy;
};

struct element * dodajKoniec(struct element * lista, int nowyElement){
    struct element * nowy = malloc(sizeof(struct element));
    nowy -> x = nowyElement;

    nowy -> next = NULL;

    struct element * temp = lista;
    while (temp -> next != NULL){
        temp = temp -> next;
    }
    temp -> next = nowy;
    return lista;
};

void dodajPoWartosci(struct element * lista, int target, int wartosc){
    struct element * temp = lista;
    while(temp != NULL && temp -> x != target){
        temp = temp -> next;
    }
    if (temp != NULL){
        struct element * nowy = malloc(sizeof(struct element));
        nowy -> x = wartosc;
        nowy -> next = temp -> next;
        temp -> next = nowy;
    }
}

struct element * dodajPrzedWartoscia(struct element * lista, int target, int wartosc){
    if (lista -> x == target){
        struct element * nowy = malloc(sizeof(struct element));
        nowy -> x = wartosc;
        nowy -> next = lista;
        return nowy;
    }
    struct element * temp = lista;
    while (temp != NULL && temp -> next -> x != target){
        temp = temp -> next;
    }
    if (temp -> next != NULL){
        struct element * nowy = malloc(sizeof(struct element));
        nowy -> x = wartosc;
        nowy -> next = temp -> next;
        temp -> next = nowy;
    }
    return lista;
};

struct element * dodajPosortowane(struct element * lista, int wartosc){
    struct element * nowy = malloc(sizeof(struct element));
    nowy -> x = wartosc;
    if (wartosc < lista -> x){
        nowy -> next = lista;
        return nowy;
    }
    struct element * temp = lista;
    while (temp != NULL && temp -> next -> x < wartosc){
        temp = temp -> next;
    }
    nowy -> next = temp -> next;
    temp -> next = nowy;

    return lista;
};

struct element * usunPierwszy(struct element * lista){
    if (lista == NULL) return NULL;

    struct element * doUsuniecia = lista;
    lista = lista -> next;
    free(doUsuniecia);

    return lista;
};

struct element * usunWartosc(struct element * lista, int target){
    if (lista -> x == target){
        struct element * temp = lista -> next;
        free(lista);
        return temp;
    }
    struct element * prev = lista;
    struct element * curr = lista -> next;

    while (curr != NULL && curr -> x != target){
        prev = curr;
        curr = curr -> next;
    }
    if (curr != NULL){
        prev -> next = curr -> next;
        free(curr);
    }
    return lista;
};

struct element * reverseLista(struct element * lista){
    struct element * prev = NULL;
    struct element * curr = lista;
    struct element * next = NULL;

    while (curr != NULL){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
};


int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 5;
    wsk2 -> x = 7;
    wsk3 -> x = 9;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;
    lista = dodajPoczatek(lista, 3);
    lista = dodajKoniec(lista, 11);
    dodajPoWartosci(lista, 11, 13);
    lista = dodajPrzedWartoscia(lista, 3, 1);
    lista = dodajPosortowane(lista, 4);
    lista = usunPierwszy(lista);
    lista = usunWartosc(lista, 4);
    lista = reverseLista(lista);

    struct element * temp = lista;
    while (temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }
    return 0;
}
