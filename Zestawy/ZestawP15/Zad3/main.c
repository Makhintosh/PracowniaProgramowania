#include <stdio.h>
#include <stdlib.h>

int countMatching(int arr[], int n, int (*condition)(int)){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (condition(arr[i]) == 1){
            count++;
        }
    }
    return count;
}

int condition(int n){
    if (n > 0){
        return 1;
    }
    return 0;
}

int main()
{
    int arr[] = {3, -4, 5, -1, 8};
    printf("%d ", countMatching(arr, 5, condition));
    return 0;
}
