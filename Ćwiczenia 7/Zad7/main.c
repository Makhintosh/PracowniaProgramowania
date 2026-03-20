#include <stdio.h>
#include <stdlib.h>

//Zad 1

void sumTwoNumbers(int a, int b){
    int suma = a + b;
    printf("Suma: %d", suma);
}

//Zad 2

double calculateAbsoluteValue(double a){
    if(a < 0.0){
        a = -a;
    }
    return a;
}

//Zad 6

double calculatePowerOftwo(int a){
    double liczba = 2.0;
    if (a > 0) {
        for (int i = 1; i < a; i++){
            liczba *= 2.0;
        }
    } else if (a < 0){
        for (int i = 1; i > a; i--){
            liczba /= 2.0;
        }
    } else {
        liczba = 1.0;
    }
    return liczba;
}

//Zad 8

void countFunctionCalls(){
    static int count = 0;
    count++;
    printf("Funkcja zostala wywolana %d razy\n", count);
}

//Zad 9

unsigned long long calculateFactorialRecursively(int n){
    if (n == 0 || n == 1){
        return 1;
    }
    return n * calculateFactorialRecursively(n - 1);
}

//Zad 12

long long calculateGeometricSequenceRecursively(int a, int d){
    if (a == 1){
        return 1;
    }

    return d * calculateGeometricSequenceRecursively(a - 1, d);
}

//Zad 16

long long calculate16(int n){
    if (n == 1){
        return 2;
    }
    if (n == 2){
        return 3;
    }
    return 2 * calculate16(n - 1) + 3 * calculate16(n - 2);
}

//Zad 18

int calculateGCD(int n, int m){
    if (m == 0){
        return n;
    }
    return calculateGCD(m, n % m);
}

int main()
{
//    Zad 1

//    sumTwoNumbers(1,2);

//    Zad 2

//    double wartosc = -32.12;
//    printf("Wartosc bezwzgledna: %.2lf", calculateAbsoluteValue(wartosc));

//    Zad 6

//    printf("%lf", calculatePowerOftwo(12));

//    Zad 8

//    countFunctionCalls();
//    countFunctionCalls();
//    countFunctionCalls();
//    countFunctionCalls();

//    Zad 9

//    printf("Wynik: %llu", calculateFactorialRecursively(5));

//    Zad 12

//    printf("Wynik: %lld", calculateGeometricSequenceRecursively(4, 2));

//    Zad 16

//    printf("Wynik: %lld", calculate16(3));

//    Zad 18

//    printf("NWD: %d", calculateGCD(48, 18));

    return 0;
}
