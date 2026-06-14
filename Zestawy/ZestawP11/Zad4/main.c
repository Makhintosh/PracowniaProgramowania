#include <stdio.h>
#include <stdlib.h>

struct City{
    char * name;
    int population;
};

char * getName(struct City arr[], int n){
    char * nazwaMiasta = arr[0].name;
    int maxLudnosci = arr[0].population;
    for (int i = 1; i < n; i++){
        if (arr[i].population > maxLudnosci){
            nazwaMiasta = arr[i].name;
            maxLudnosci = arr[i].population;
        }
    }
    return nazwaMiasta;
}

int main()
{
    struct City miasta[] = {
        {"Lublin", 330000},
        {"Krakow", 770000},
        {"Gdansk", 470000}
    };
    char * wynik = getName(miasta, 3);
    printf("%s ", wynik);
    return 0;
}
