#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * insertAfterValue(struct element * lista, int target, int newValue){
    if (lista == NULL){
        return lista;
    }
    struct element * temp = lista;
    while(temp != NULL && temp -> x != target){
        temp = temp -> next;
    }
    if (temp == NULL){
        return lista;
    }
    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = newValue;
    nowa -> next = temp -> next;
    temp -> next = nowa;
    return lista;
};

struct element * removeLast(struct element * lista){
    if (lista == NULL){
        return NULL;
    }
    if (lista -> next == NULL){
        free(lista);
        return NULL;
    }

    struct element * temp = lista;

    while(temp -> next -> next != NULL){
        temp = temp -> next;
    }

    struct element * doUsuniecia = temp -> next;
    temp -> next = doUsuniecia -> next;
    free(doUsuniecia);
    return lista;
};

struct element * moveFirstToEnd(struct element * lista){
    if (lista == NULL){
        return lista;
    }

    if (lista -> next == NULL){
        return lista;
    }

    struct element * naOstatnie = lista;
    lista = lista -> next;

    struct element * temp = lista;
    while(temp -> next != NULL){
        temp = temp -> next;
    }

    temp -> next = naOstatnie;
    naOstatnie -> next = NULL;
    return lista;
};

struct element * insertBeforeValue(struct element * lista, int target, int newValue){
    if (lista == NULL){
        return lista;
    }

    if (lista -> x == target){
        struct element * nowa = malloc(sizeof(struct element));
        nowa -> x = newValue;
        nowa -> next = lista;
        return nowa;
    }

    struct element * temp = lista;
    while(temp != NULL && temp -> next -> x == target){
        temp = temp -> next;
    }

    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = newValue;

    nowa -> next = temp -> next;
    temp -> next = nowa;

    return lista;
};

struct element * removeAtPosition(struct element * lista, int pos){
    if (pos < 0){
        return lista;
    }

    if (lista == NULL){
        return lista;
    }

    if (pos == 0){
        struct element * doUsuniecia = lista;
        lista = lista -> next;
        free(doUsuniecia);
        return lista;
    }

    struct element * temp = lista;

    int count = 0;
    while(temp != NULL && temp -> next != NULL && count != pos - 1){
        temp = temp -> next;
        count++;
    }

    if (temp == NULL || temp -> next == NULL){
        return lista;
    }

    struct element * doUsuniecia = temp -> next;
    temp -> next = doUsuniecia -> next;
    free(doUsuniecia);
    return lista;

};

void insertAfterLastOccurrance(struct element * lista, int target, int newValue){

    if (lista == NULL){
        return;
    }

    struct element * ostatnieWystapienie = NULL;
    struct element * temp = lista;
    while (temp != NULL){
        if (temp -> x == target){
            ostatnieWystapienie = temp;
        }
        temp = temp -> next;
    }

    if (ostatnieWystapienie == NULL){
        return;
    }

    struct element * nowa = malloc(sizeof(struct element));
    nowa -> x = newValue;

    nowa -> next = ostatnieWystapienie -> next;
    ostatnieWystapienie -> next = nowa;
}

struct element * moveLastToFront(struct element * lista){
    if (lista == NULL){
        return lista;
    }

    if (lista -> next == NULL){
        return lista;
    }

    struct element * OstatniElement = NULL;

    struct element * temp = lista;

    while (temp != NULL){
        if (temp -> next -> next == NULL){
            OstatniElement = temp -> next;
            temp -> next = NULL;
        }
        temp = temp -> next;
    }

    OstatniElement -> next = lista;
    return OstatniElement;
};

struct element * moveValueToFront(struct element * lista, int target){
    if (lista == NULL){
        return lista;
    }

    if (lista -> x == target){
        return lista;
    }

    struct element * temp = lista;
    while(temp -> next != NULL && temp -> next -> x != target){
        temp = temp -> next;
    }

    if (temp -> next == NULL){
        return lista;
    }

    struct element * doPrzeniesiena = temp -> next;
    temp -> next = doPrzeniesiena -> next;
    doPrzeniesiena -> next = lista;
    return doPrzeniesiena;
};

struct element * usunDuplikaty(struct element * lista){
    if (lista == NULL || lista -> next == NULL){
        return lista;
    }

    struct element * temp = lista;

    while(temp != NULL){
        struct element * biegacz = temp;
        while (biegacz -> next != NULL){
            if (biegacz -> next -> x == temp -> x){
                struct element * doUsuniecia = biegacz -> next;
                biegacz -> next = doUsuniecia -> next;
                free(doUsuniecia);
            } else {
                biegacz = biegacz -> next;
            }
            temp = temp -> next;
        }
    }
    return lista;
};

int main()
{
    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 1;
    wsk2 -> x = 2;
    wsk3 -> x = 2;

    wsk1 -> next = wsk2;
    wsk2 -> next = wsk3;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

//    lista = insertAfterValue(lista, 3, 9);
//    lista = removeLast(lista);
//    lista = moveFirstToEnd(lista);
//    lista = insertBeforeValue(lista, 2, 3);
//    lista = removeAtPosition(lista, 3);
//    insertAfterLastOccurrance(lista, 2, 10);
//    lista = moveLastToFront(lista);
//    lista = moveValueToFront(lista, 3);
    lista = usunDuplikaty(lista);

    struct element * temp = lista;
    while(temp != NULL){
        printf("%d ", temp -> x);
        temp = temp -> next;
    }

    return 0;
}
