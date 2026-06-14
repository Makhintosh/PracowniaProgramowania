#include <stdio.h>
#include <stdlib.h>

int countVowels(char * napis){
    int suma = 0;
    int i = 0;
    while (napis[i] != '\0'){
        if (napis[i] == 'a' || napis[i] == 'e' || napis[i] == 'i' || napis[i] == 'o' || napis[i] == 'u' || napis[i] == 'A' || napis[i] == 'E' || napis[i] == 'I' || napis[i] == 'O' || napis[i] == 'U'){
            suma++;
        }
        i++;
    }
    return suma;
}

int main()
{
    char * napis = "Ala ma Kota";
    printf("Liczba samoglosek: %d\n", countVowels(napis));
    return 0;
}
