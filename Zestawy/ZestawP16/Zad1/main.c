#include <stdio.h>
#include <stdlib.h>

int isAutomorphic(int n){
    if (n <= 0){
        return 0;
    }

    int kwadrat = n * n;

    while(n > 0){
        if (n % 10 != kwadrat % 10){
            return 0;
        }

        n /= 10;
        kwadrat /= 10;
    }
    return 1;
}

int main()
{
    printf("Czy 5 jest automorficzna? %d\n", isAutomorphic(14));
    return 0;
}
