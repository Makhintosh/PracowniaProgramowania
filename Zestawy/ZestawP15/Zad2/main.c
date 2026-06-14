#include <stdio.h>
#include <stdlib.h>

int seqA(int n){
    if (n == 0){
        return 2;
    }

    if (n % 2 == 0){
        return seqA(n - 1) + 3 * n;
    } else {
        return 2 * seqA(n - 1);
    }
}

int main()
{
    printf("%d ", seqA(4));
    return 0;
}
