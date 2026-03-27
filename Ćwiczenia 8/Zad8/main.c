#include <stdio.h>
#include <stdlib.h>

//Zad 2

//Punkt 1

int sum(int a, int b){
    return a + b;
}

//Punkty 2

int sumVals(int *a, int *b){
    return *a + *b;
}

//Punkt 3

void addPtr(int *a, int *b, int *suma){
    *suma = *a + *b;
}

//Zad 3

void copyInt(int x, int *w){
    *w = x;
}

//Zad 6

float* initFloats(){
    float *ptr = (float*)malloc(3 * sizeof(float));
    *ptr = 4.5f;
    *(ptr + 1) = 2.3f;
    *(ptr + 2) = -4.2f;
    return ptr;
}

//Zad 9

void sqrCopy(const int *a, int *b){
    *b = (*a) * (*a);
}

int main()
{
//    Zad 1

//    printf("%zu\n", sizeof(int));
//    printf("%zu\n", sizeof(int*));

//    Zad 2

//    Punkt 1

//    int a = 1;
//    int b = 2;
//    int wynik = 0;
//
//    printf("Wynik: %d\n", sum(a, b));
//    printf("a = %d, b = %d\n", a, b);

//    Punkt 2

//    printf("Wynik: %d\n", sumVals(&a, &b));

//    Punkt 3

//    printf("Przed addPtr:\na = %d, b = %d, wynik = %d\n", a, b, wynik);
//
//    addPtr(&a, &b, &wynik);
//    printf("Po addPtr:\na = %d, b = %d, wynik = %d\n", a, b, wynik);

//    Zad 3

//    int wartosc_x = 15;
//    int wartosc_w = 0;
//
//    printf("Wartosc x = %d, wartosc w = %d\n", wartosc_x, wartosc_w);
//    copyInt(wartosc_x, &wartosc_w);
//    printf("Wartosc x = %d, wartosc w = %d\n", wartosc_x, wartosc_w);

//    Zad 6

//    float *liczby = initFloats();
//    printf("Wynik: %.1f, %.1f, %.1f", *liczby, *(liczby + 1), *(liczby + 2));
//    free(liczby);

//    Zad 9

//    const int liczba = 7;
//    int wynik = 0;
//    sqrCopy(&liczba, &wynik);
//    printf("Liczba: %d, Wynik: %d", liczba, wynik);

    return 0;
}
