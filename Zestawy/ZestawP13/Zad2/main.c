#include <stdio.h>
#include <stdlib.h>

int isPalindrome(char * napis){
    int len = 0;
    while (napis[len] != '\0'){
        len++;
    }

    if (len == 0){
        return 1;
    }

    int poczatek = 0;
    int koniec = len - 1;

    while (poczatek < koniec){
        if (napis[poczatek] != napis[koniec]){
            return 0;
        }
        poczatek++;
        koniec--;
    }
    return 1;
}

int main()
{
    char * napis = "Ala";
    printf("%d ", isPalindrome(napis));
    return 0;
}
