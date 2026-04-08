#include <stdio.h>
#include <stdlib.h>

//Zad 7

void operation(int a){
    printf("Wartosc: %d\n", a);
}

void executeSequence(void (*operation)(int), int count){
    for (int i = 1; i <= count; i++){
        operation(i);
    }
}

//Zad 8

int modifier(void){
    return 15;
}

int modifyValue(int value, int (*modifier)(void)){
    return value + modifier();
}

//Zad 9

double processor(int a, int b){
    return (a + b) / 1.5;
}

int processPair(int a, int b, double (*processor)(int, int)){
    double wynik = processor(a, b);
    return (int)floor(wynik);
}

//Zad 10

int transform(int x){
    return x * 2;
}

int transformLoop(int (*transform)(int), int start, int iterations){
    int wynik = start;
    for (int i = 0; i < iterations; i++){
        wynik = transform(wynik);
    }
    return wynik;
}

int main()
{
//    Zad 7

    int count = 15;
    executeSequence(operation, count);

//    Zad 8

    int initialValue = 10;
    int wynik = modifyValue(initialValue, modifier);
    printf("Wynik przed modifyValue: %d, Wynik po: %d\n", initialValue, wynik);

//    Zad 9

    int a = 12;
    int b = 5;
    int wynik1 = processPair(a, b, processor);
    printf("Wynik processPair: %d\n", wynik1);

//    Zad 10

    int start = 3;
    int iteracje = 4;
    int wynik2 = transformLoop(transform, start, iteracje);
    printf("Wynik transformLoop: %d\n", wynik2);

    return 0;
}
