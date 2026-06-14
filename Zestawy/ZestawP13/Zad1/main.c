#include <stdio.h>
#include <stdlib.h>

int countEvenDivisors(int n){
    if (n <= 0){
        return 0;
    }
    int count = 0;
    for (int i = 1; i <= n; i++){
        if (n % i == 0){
            if (i % 2 == 0){
                count++;
            }
        }
    }
    return count;
}

int main()
{
    printf("%d ", countEvenDivisors(15));
    return 0;
}
