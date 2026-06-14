#include <stdio.h>
#include <stdlib.h>

struct Player{
    char * name;
    int height;
    float points;
};

int countPlayers(struct Player arr[], int n, int minHeight, float minPoints){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (arr[i].height >= minHeight && arr[i].points >= minPoints){
            count++;
        }
    }
    return count;
}

int main()
{
    struct Player zawodnicy[] = {
        {"Adam", 190, 12.5},
        {"Bartek", 185, 8.0},
        {"Cezary", 198, 15.2},
        {"Damian", 201, 6.5}
    };

    int n = 4;
    int minWzrost = 190;
    float minPunkty = 10.0;


    int wynik = countPlayers(zawodnicy, n, minWzrost, minPunkty);
    printf("%d ", wynik);
    return 0;
}
