#include <stdio.h>
#include <stdlib.h>

int isPerfectSquare(int n){
    if (n <= 0){
        return 0;
    }

    int k = 1;

    while (k * k < n){
        k++;
    }

    return k * k == n;
}

int main()
{
    printf("%d ", isPerfectSquare(81));
    return 0;
}
