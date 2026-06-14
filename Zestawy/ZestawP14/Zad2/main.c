#include <stdio.h>
#include <stdlib.h>

void removeSpaces(char * napis){
    int czytak = 0;
    int pisak = 0;

    while (napis[czytak] != '\0'){
        if (napis[czytak] != ' '){
            napis[pisak] = napis[czytak];
            pisak++;
        }
        czytak++;
    }
    napis[pisak] = '\0';
}

int main()
{
    char napis[] = "Ala ma Kota";
    removeSpaces(napis);
    printf("%s ", napis);
    return 0;
}
