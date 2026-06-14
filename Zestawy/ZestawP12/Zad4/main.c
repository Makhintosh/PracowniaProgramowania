#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Book{
    char title[30];
    int pages;
};

struct Book * newBook(char * title, int pages){
    if (pages <= 0){
        return NULL;
    }

    struct Book * nowaKsiazka = malloc(sizeof(struct Book));
    nowaKsiazka -> pages = pages;
    strncpy(nowaKsiazka -> title, title, 29);
    nowaKsiazka -> title[29] = '\0';
    return nowaKsiazka;
};

void addPages(struct Book * ksiazka, int extra){
    if (ksiazka != NULL && extra > 0){
        ksiazka->pages += extra;
    }
}

int main()
{
    struct Book * ksiazka = newBook("Lalka", 400);
    addPages(ksiazka, 50);
    printf("Ksiazka: %s, liczba stron: %d", ksiazka->title, ksiazka->pages);
    return 0;
}
