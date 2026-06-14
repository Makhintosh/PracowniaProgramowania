#include <stdio.h>
#include <stdlib.h>

int sumOddDigits(int n){
    if (n < 0){
        return 0;
    }

    int suma = 0;
    while (n > 0){
        int cyfra = n % 10;
        if (cyfra % 2 != 0){
            suma += cyfra;
        }
        n = n / 10;
    }
    return suma;
}

int main()
{
    printf("%d ", sumOddDigits(1234));
    return 0;
}
