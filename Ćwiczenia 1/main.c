#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//    Zad 1
//    Napisz program,
//    który prosi u¿ytkownika o wprowadzenie
//    jednej liczby ca³kowitej, a nastêpnie wyœwietla j¹ na ekranie.

//    int liczba1;
//    printf("Podaj liczbe ca³kowita: ");
//    scanf("%d", &liczba1);
//    printf("Twoja liczba calkowita: %d", liczba1);


//    Zad 2
//    Stwórz program, który wczytuje od u¿ytkownika
//    dwie liczby zmiennoprzecinkowe i wypisuje ich ró¿nicê.

//    float liczba1;
//    float liczba2;
//    printf("Podaj pierwsza liczbe zmiennoprzecinkowa: ");
//    scanf("%f", &liczba1);
//    printf("Podaj druga liczbe zmiennoprzecinkowa: ");
//    scanf("%f", &liczba2);
//    float wynik = liczba1 - liczba2;
//    printf("Wynik roznicy tych dwoch liczb to: %f", wynik);

//    Zad 3
//    Zaprojektuj aplikacjê, która pyta u¿ytkownika
//    o jego rok urodzenia, a nastêpnie wypisuje
//    rok poprzedni (o jeden mniejszy).

//    int rokUrodzenia;
//    printf("Podaj swoj rok urodzenia: ");
//    scanf("%d", &rokUrodzenia);
//    int rokPoprzedni = rokUrodzenia - 1;
//    printf("Poprzedni rok urodzenia od twojego to: %d", rokPoprzedni);

//    Zad 4
//    Napisz program, który wczytuje od u¿ytkownika trzy liczby
//    ca³kowite i wypisuje ich œredni¹ jako wartoœæ zmiennoprzecinkow¹.

//    int liczba1;
//    int liczba2;
//    int liczba3;
//    printf("Podaj pierwsza liczbe calkowita: ");
//    scanf("%d", &liczba1);
//    printf("Podaj druga liczbe calkowita: ");
//    scanf("%d", &liczba2);
//    printf("Podaj trzecia liczbe calkowita: ");
//    scanf("%d", &liczba3);
//    float srednia = (liczba1 + liczba2 + liczba3) / 3;
//    printf("Twoja srednia: %f", srednia);

//    Zad 5
//    Utwórz program, który prosi u¿ytkownika o wprowadzenie
//    dwóch liter (znaków), a nastêpnie wypisuje je w odwrotnej kolejnoœci.

//    char znak1[2];
//    char znak2[2];
//    printf("Podaj pierwszy znak: ");
//    scanf("%s", znak1);
//    printf("Podaj drugi znak: ");
//    scanf("%s", znak2);
//    printf("Twoje znaki w odwrotnej kolejnosci: %s %s", znak2, znak1);

//    Zad 6
//    Napisz program, który prosi u¿ytkownika
//    o wprowadzenie jednej liczby zmiennoprzecinkowej,
//    a nastêpnie podwaja jej wartoœæ i wypisuje wynik.

//    float liczba1;
//    printf("Podaj liczbe: ");
//    scanf("%f", &liczba1);
//    float wynik = 2 * liczba1;
//    printf("Podwojona wartosc: %f", wynik);

//    Zad 7
//    Utwórz program, który wczytuje od u¿ytkownika liczbê
//    zmiennoprzecinkow¹ reprezentuj¹c¹ kwotê w dolarach, a nastêpnie wypisuje,
//    ile to jest euro, przyjmuj¹c sta³y kurs wymiany
//    (np. 1 dolar = 0.85 euro).

//    float dolar;
//    printf("Ile dolarow: ");
//    scanf("%f", &dolar);
//    float wynik = dolar * 0.85;
//    printf("Wynik: %f", wynik);

//    Zad 8
//    Napisz program, który wyświetla na ekranie tekst: To jest cytat: "Często używam języka C.".
//    Upewnij się, że znaki cudzysłowu są poprawnie wyświetlane jako część napisu.

//    printf("To jest cytat: \"Czesto uzywam jezyka C.\"\n");

//    Zad 9
//    Stwórz program, który wypisuje na standardowe wyjście ścieżkę
//    do folderu w systemie Windows, np. C:\Program Files\MojaAplikacja\
//    (na sztywno, bez pobierania czegoś z systemu) lub C:\\Program Files\\MojaAplikacja\\.

//    printf("C:\\Program Files\\MojaAplikacja\\\n");

//    Zad 10
//    Zaprojektuj program, który pokazuje, jak wypisać na ekranie następujący tekst:
//    Specjalne znaki: \t (tabulacja), \n (nowa linia), % (procent), \\ (ukośnik wsteczny)..

//    printf("Specjalne znaki: \\t (tabulacja), \\n (nowa linia), %% (procent), \\\ (ukosnik wsteczny).\n");

//    Zad 11
//    Napisz program, który wczytuje ze standardowego wejścia dwie liczby wymierne
//    reprezentujące długości boków trójkąta prostokątnego.
//    Następnie oblicz i wyświetl długość przeciwprostokątnej.

//    double a, b;
//
//    printf("Podaj dlugosc pierwszego boku: ");
//    scanf("%lf", &a);
//
//    printf("Podaj dlugosc drugiego boku: ");
//    scanf("%lf", &b);
//
//    double c = sqrt((a * a) + (b * b));
//
//    printf("Dlugosc przeciwprostokatnej: %.2lf", c);

//    Zad 12
//    Napisz program, który wczytuje ze standardowego wejścia całkowitą
//    i wypisuje na standardowym wyjściu jej wartość bezwzględną.

//    int a;
//
//    printf("Podaj liczbe calkowita: ");
//    scanf("%d", &a);
//    printf("Wartosc bezwzgledna: %d", abs(a));

//    Zad 13
//    Napisz program, który wczytuje ze standardowego wejścia zmiennoprzecinkową
//    i wypisuje na standardowym wyjściu jej wartość bezwzględną.

//    double a;
//
//    printf("Podaj liczbe zmiennoprzecinkowa: ");
//    scanf("%lf", &a);
//    printf("Wartosc bezwzgledna: %.2lf", fabs(a));

//    Zad 14
//    Znajdź przykład i wyświetl na standardowym wyjściu,
//    kiedy dodawanie liczb zmiennoprzecinowych nie jest łączne.

//    double a = 3.6;
//    double b = -2.0;
//    double c = 1.0;
//
//    double wynik1 = (a + b) + c;
//    double wynik2 = a + (b + c);
//
//    printf("Wynik 1: %lf\n", wynik1);
//    printf("Wynik 2: %lf", wynik2);

    return 0;
}
