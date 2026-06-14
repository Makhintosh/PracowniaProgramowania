#include <stdio.h>
#include <stdlib.h>

void toUpperCase(char * napis){
    int i = 0;
    while (napis[i] != '\0'){
        if (napis[i] >= 'a' && napis[i] <= 'z'){
            napis[i] = napis[i] - ('a' - 'A');
        }
        i++;
    }
}

int main()
{
    char napis[] = "Ala ma 2 Koty";
    toUpperCase(napis);
    printf("%s ", napis);
    return 0;
}
