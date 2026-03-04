#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void)
{
//    int a = 1;
//    int b = 2;
//    double c = 3.5;
//    double d = 3.2;
//
//    a = a + b;
//    a += b;
//
//    a = a - b;
//    a -= b;
//
//    a = a * b;
//    a *= b;
//
//    a = a / b;
//    a /= b;
//
//    a = a % b;
//    a %= b;
//
//    int i = 0;
//    printf("%d ", i++);
//    printf("%d ", i);
//    printf("%d ", ++i);
//    printf("%d\n", i);
//
//    double s = 0.1 + 0.2;
//    printf("0.1 + 0.2 = %.2lf\n", s);
//    int x1 = 8;
//    int x2 = 3;
//    double x3 = (double)x1 / x2;
//    printf("%lf\n", x3);

//    double x1 = 0.1 + 0.2;
//    double x2 = 0.3;
//    double epsilon = 1e-9;
//    if(fabs(x1 - x2) < epsilon){
//        printf("prawidlowy wynik\n");
//    }else if(fabs(x1 - x2) == epsilon){
//        printf("roznica jest rowna dokladnie 0.00000000001\n");
//    }else{
//        printf("nieprawidlowy wynik\n");
//    }

//    Zad 1
//    Napisz program, który oblicza resztê
//    z dzielenia sumy dwóch liczb ca³kowitych przez trzeci¹ liczbê ca³kowit¹.

//    int a = 8, b = 2, c = 3;
//    int wynik = (a + b) % c;
//    printf("%d", wynik);

//    Zad 2
//    Stwórz program, który oblicza ró¿nicê
//    kwadratów dwóch podanych liczb ca³kowitych.

//    int a = 4, b = 3;
//    int wynik = (a*a) - (b*b);
//    printf("%d", wynik);

//    Zad 3
//    Opracuj program, który oblicza iloczyn ró¿nicy dwóch
//    liczb ca³kowitych i trzeciej liczby ca³kowitej.

//    int a = 1, b = 2, c = 3;
//    int wynik = (a - b) * c;
//    printf("%d", wynik);

//    Zad 4
//    Zaprojektuj program, który oblicza œredni¹ geometryczn¹
//    bezwzglêdnych wartoœci trzech podanych liczb ca³kowitych.

//    int a = 2, b = 3, c = -4;
//    a = abs(a);
//    b = abs(b);
//    c = abs(c);
//    double wynik = cbrt(a*b*c);
//    printf("%.3lf", wynik);

//    Zad 5
//    Napisz program, który oblicza kwadrat
//    sumy dwóch podanych liczb ca³kowitych.

//    int a = 2, b = 3;
//    int wynik = pow((a+b), 2);
//    printf("%d", wynik);

//    Zad 6
//    Stwórz program, który oblicza sumê
//    kwadratów trzech podanych liczb ca³kowitych.

//    int a = 2, b = 3, c = 4;
//    int wynik = (a*a) + (b*b) + (c*c);
//    printf("%d", wynik);

//    Zad 7
//    Opracuj program, który oblicza, ile razy jedna podana liczba całkowita mieści się w drugiej podanej liczbie całkowitej.

//    int a, b;
//
//    printf("Podaj pierwsza liczbe: ");
//    scanf("%d", &a);
//
//    printf("Podaj druga liczbe: ");
//    scanf("%d", &b);
//
//    int wynik = b / a;
//    printf("Miesci sie %d razy", wynik);

//    Zad 8
//    Zaprojektuj program, który oblicza kwadrat różnicy dwóch podanych liczb całkowitych.

//    int a, b;
//
//    printf("Podaj pierwsza liczbe calkowita: ");
//    scanf("%d", &a);
//
//    printf("Podaj druga liczbe calkowita: ");
//    scanf("%d", &b);
//
//    int roznica = a - b;
//    int wynik = roznica * roznica;
//
//    printf("Wynik: %d", wynik);

//    Zad 9
//    Napisz program, który oblicza iloraz sumy dwóch liczb całkowitych przez ich różnicę.

//    int a, b;
//
//    printf("Podaj pierwsza liczbe calkowita: ");
//    scanf("%d", &a);
//
//    printf("Podaj druga liczbe calkowita: ");
//    scanf("%d", &b);
//
//    double suma = a + b;
//    double roznica = a - b;
//    double wynik = suma / roznica;
//    printf("Wynik: %0.2lf", wynik);

//    Zad 10
//    Stwórz program, który oblicza sumę trzech kolejnych liczb całkowitych, zaczynając od podanej liczby całkowitej.

//    int a;
//
//    printf("Podaj poczatkowa liczbe calkowita: ");
//    scanf("%d", &a);
//
//    int suma = a + (a + 1) + (a + 2);
//
//    printf("Wynik: %d", suma);

//    Zad 11
//    Znajdź średnią arytmetyczną trzech liczb zmiennoprzecinkowych.

//    double a, b, c;
//
//    printf("Podaj trzy liczby zmiennoprzecinkowe oddzielone spacja: ");
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    double srednia = (a + b + c) / 3;
//
//    printf("Srednia arytmetyczna wynosi: %.2lf", srednia);

//    Zad 12
//    Oblicz wartość wyrażenia

//    double a, b, c;
//
//    printf("Podaj trzy rozne od zera liczby zmiennoprzecinkowe: ");
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    double wynik = 1 / ((1 / a) + (1 / b) + (1 / c));
//    printf("Wynik: %0.2lf", wynik);

//    Zad 13
//    Wylicz wartość

//    double x;
//
//    printf("Podaj wartosc x: ");
//    scanf("%lf", &x);
//
//    double wynik = 1 + x;
//
//    printf("Przyblizona wartosc e^x dla x = %lf wynosi: %.6lf", x, wynik);

//    Zad 14
//    Oblicz pole trójkąta

//    double a, b, C;
//    double PI = 3.14;
//
//    printf("Podaj bok a, b oraz stopnie miedzy nimi: ");
//    scanf("%lf %lf %lf", &a, &b, &C);
//    double radiany = C * PI / 180;
//
//    double pole = 0.5 * a * b * radiany;
//
//    printf("Pole: %0.4lf", pole);


//    Zad 15
//    Oblicz

//    double x;
//
//    printf("Podaj wartosc x: ");
//    scanf("%lf", &x);
//
//    double wynik = 1 + (x / 3);
//
//    printf("Przyblizona wartosc : %.4lf", wynik);

    return 0;
}
