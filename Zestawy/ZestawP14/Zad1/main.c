#include <stdio.h>
#include <stdlib.h>

int reverseNumber(int n){
    int reversed = 0;

    while (n > 0){
        int cyfra = n % 10;
        reversed = reversed * 10 + cyfra;
        n = n / 10;
    }
    return reversed;
}

int main()
{
    printf("%d ", reverseNumber(1234));
    return 0;
}
