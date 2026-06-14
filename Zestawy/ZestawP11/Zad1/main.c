#include <stdio.h>
#include <stdlib.h>

int isAbundant(int liczba){
    if (liczba <= 0){
        return 0;
    }

    int suma = 0;
    for (int i = 1; i <= liczba / 2; i++){
        if (liczba % i == 0){
            suma += i;
        }
    }
    if (suma > liczba){
        return 1;
    }
    return 0;
}

int main()
{
    printf("Czy liczba 12 jest obfita: %d\n", isAbundant(12));
    printf("Czy liczba 8 jest obfita: %d\n", isAbundant(8));

    return 0;
}
