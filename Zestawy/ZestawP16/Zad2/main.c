#include <stdio.h>
#include <stdlib.h>

int seqB(int n){
    if (n == 0){
        return 5;
    }

    if (n % 3 == 0){
        return seqB(n - 1) - 2;
    } else {
        return seqB(n - 1) + n;
    }
}

int main()
{
    printf("%d ", seqB(4));
    return 0;
}
