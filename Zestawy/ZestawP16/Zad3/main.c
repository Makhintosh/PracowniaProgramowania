#include <stdio.h>
#include <stdlib.h>

int transformer(int n){
    return n * 2;
}

void mapArray(int arr[], int n, int (*transformer)(int)){
    for (int i = 0; i < n; i++){
        arr[i] = transformer(arr[i]);
    }
}

int main()
{
    int n = 4;
    int arr[] = {1, 2, 3, 4};
    mapArray(arr, n, transformer);
    for (int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
