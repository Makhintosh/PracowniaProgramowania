#include <stdio.h>
#include <stdlib.h>

struct element{
    int x;
    struct element * next;
};

struct element * createNoHead(){
    struct element * lista = NULL;
    return lista;
};

int main()
{
    struct element * lista = createNoHead();

    if (lista == NULL){
        printf("Lista utworzona");
    }
    return 0;
}
