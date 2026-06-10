#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * createWithHead(){
    struct element * lista = malloc(sizeof(struct element));
    lista -> next = NULL;
    return lista;
};

int main()
{
    struct element * lista = createWithHead();

    if(lista == NULL || lista -> next == NULL){
        printf("Lista utworzona");
    }
    return 0;
}
