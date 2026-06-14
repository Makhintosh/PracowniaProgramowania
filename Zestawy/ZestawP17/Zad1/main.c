#include <stdio.h>
#include <stdlib.h>

int isTriangular(int n){
    if (n <= 0){
        return 0;
    }

    int k = 1;
    int suma = 0;

    while (n > suma){
        suma += k;
        k++;
    }
    return n == suma;
}

int main()
{
    printf("%d ", isTriangular(12));
    return 0;
}
