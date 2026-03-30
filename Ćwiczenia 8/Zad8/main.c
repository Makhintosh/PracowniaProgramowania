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

//Zad 12

float linFuncVal(const float *a, float *const b, const float *x){
    return (*a) * (*x) + (*b);
}

//Zad 16

void swap(int *ptr1, int *ptr2){
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

//Zad 17

void swapSign(double *ptr1, double *ptr2){
    if ((*ptr1 < 0.0 && *ptr2 > 0.0) || (*ptr1 > 0.0 && *ptr2 < 0.0)){
        double temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
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

//    Zad 12

//    const float wartosc_a = 2.5f;
//    const float wartosc_x = 4.0f;
//    float wartosc_b = 10.0f;
//    printf("a = %.2f, b = %.2f, x = %.2f\n", wartosc_a, wartosc_b, wartosc_x);
//
//    float wynik = linFuncVal(&wartosc_a, &wartosc_b, &wartosc_x);
//    printf("Wynik funkcji liniowej y = ax + b: %.2f", wynik);

//    Zad 16

//    int zmienna_a = 420;
//    int zmienna_b = 67;
//
//    printf("Przed wywolaniem swap: zmienna_a = %d, zmienna_b = %d\n", zmienna_a, zmienna_b);
//
//    swap(&zmienna_a, &zmienna_b);
//    printf("Po wywolaniu swap: zmienna_a = %d, zmienna_b = %d\n", zmienna_a, zmienna_b);

//    Zad 17

//    double a = 5.5;
//    double b = -6.7;
//
//    printf("Przed wywolaniem swapSign: a = %.2lf, b = %.2lf\n", a, b);
//
//    swapSign(&a, &b);
//    printf("Po wywolaniu swapSign: a = %.2lf, b = %.2lf\n", a, b);
    return 0;
}
