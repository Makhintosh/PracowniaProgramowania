#include <stdio.h>
#include <stdlib.h>

int isArmstrong(int n){
    if (n <= 0){
        return 0;
    }

    int kopia = n;
    int liczba_cyrf = 0;
    int suma = 0;

    while (kopia > 0){
        liczba_cyrf++;
        kopia = kopia / 10;
    }

    kopia = n;

    while (kopia > 0){
        int cyfra = kopia % 10;
        int potega = 1;
        for (int i = 0; i < liczba_cyrf; i++){
            potega *= cyfra;
        }
        suma += potega;
        kopia /= 10;
    }
    return suma == n;
}

int main()
{
    printf("Czy 153 jest liczba Armstronga? %d\n", isArmstrong(153));   // 1
    return 0;
}
