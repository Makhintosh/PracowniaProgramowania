#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
//    Zad 1
//    Napisz program, który prosi u¿ytkownika
//    o wprowadzenie liczby ca³kowitej. Program powinien wyœwietliæ informacjê,
//    czy wprowadzona liczba jest dodatnia, ujemna czy równa zero.

//    int a;
//    printf("Podaj liczbe calkowita: ");
//    scanf("%d", &a);
//
//    if (a > 0){
//        printf("Liczba dodatnia");
//    }else if (a < 0){
//        printf("Liczba ujemna");
//    }else{
//        printf("Zero");
//    }

//    Zad 2
//    Napisz program, który przyjmuje od u¿ytkownika
//    dwie liczby ca³kowite i wyœwietla wiêksz¹ z nich.

//    int a, b;
//    printf("Podaj dwie liczby calkowite: ");
//    scanf("%d %d", &a, &b);
//
//    if (a > b) {
//        printf("Wieksza liczba to: %d", a);
//    } else if (b > a) {
//        printf("Wieksza liczba to: %d", b);
//    } else {
//        printf("Liczby sa rowne.");
//    }

//    Zad 3
//    Napisz program, który prosi o wprowadzenie oceny
//    w skali od 1 do 5. Program powinien wyœwietliæ opis oceny:
//    niedostateczny (1), dopuszczaj¹cy (2), dostateczny (3),
//    dobry (4), bardzo dobry (5). Dla liczby spoza zakresu,
//    program powinien wyœwietliæ komunikat o b³êdzie.

//    int ocena;
//    printf("Podaj ocene (1-5): ");
//    scanf("%d", &ocena);
//
//    switch (ocena) {
//        case 1:
//            printf("niedostateczny");
//            break;
//        case 2:
//            printf("dopuszczajacy");
//            break;
//        case 3:
//            printf("dostateczny");
//            break;
//        case 4:
//            printf("dobry");
//            break;
//        case 5:
//            printf("bardzo dobry");
//            break;
//        default:
//            printf("Ocena poza zakresem (1-5).");
//            break;
//    }

//    Zad 4
//    Napisz program, który prosi u¿ytkownika o wprowadzenie
//    trzech ró¿nych liczb ca³kowitych i wyœwietla najmniejsz¹ z nich.

//    int a, b, c, min;
//    printf("Podaj trzy rozne liczby calkowite: ");
//    scanf("%d %d %d", &a, &b, &c);
//
//    min = a;
//
//    if (b < min) {
//        min = b;
//    }
//    if (c < min) {
//        min = c;
//    }
//
//    printf("Najmniejsza liczba to: %d", min);

//    Zad 5
//    Napisz program, który pyta u¿ytkownika o rok i sprawdza,
//    czy podany rok jest rokiem przestêpnym. Rok przestêpny to taki,
//    który jest podzielny przez 4, ale nie jest podzielny przez 100,
//    chyba ¿e jest te¿ podzielny przez 400.

//    int rok;
//    printf("Podaj rok: ");
//    scanf("%d", &rok);
//
//    if ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) {
//        printf("Rok %d jest przestepny.", rok);
//    } else {
//        printf("Rok %d nie jest przestepny.", rok);
//    }

//    Zad 6
//    Napisz program, który przyjmuje od u¿ytkownika
//    dwie liczby ca³kowite i wyœwietla informacjê,
//    czy suma obu liczb jest parzysta czy nieparzysta.

//    int a, b, suma;
//    printf("Podaj dwie liczby calkowite: ");
//    scanf("%d %d", &a, &b);
//
//    suma = a + b;
//
//    if (suma % 2 == 0) {
//        printf("Suma jest parzysta.");
//    } else {
//        printf("Suma jest nieparzysta.");
//    }

//    Zad 7
//    Napisz program, który przyjmuje od u¿ytkownika trzy
//    liczby zmiennoprzecinkowe a, b, c. Potraktuj je jako wspó³czynniki
//    równania kwadratowego ax^2 + bx + c = 0. Na standardowym
//    wyjœciu wypisz wszystkie warianty rozwi¹zañ tego równania.

//    double a, b, c, delta, x1, x2;
//
//    printf("Podaj wspolczynniki a, b, c: ");
//    scanf("%lf %lf %lf", &a, &b, &c);
//
//    if (a == 0) {
//        printf("To nie jest rownanie kwadratowe (a = 0).");
//        if (b != 0) {
//            printf("Rozwiazanie rownania liniowego: x = %.2lf", -c / b);
//        } else if (c == 0) {
//            printf("Rownanie tozsamosciowe (nieskonczenie wiele rozwiazan).");
//        } else {
//            printf("Rownanie sprzeczne (brak rozwiazan).");
//        }
//    } else {
//        delta = (b * b) - (4 * a * c);
//
//        if (delta > 0) {
//            x1 = (-b - sqrt(delta)) / (2 * a);
//            x2 = (-b + sqrt(delta)) / (2 * a);
//            printf("Rownanie ma dwa rozwiazania: x1 = %.2lf, x2 = %.2lf", x1, x2);
//        } else if (delta == 0) {
//            x1 = -b / (2 * a);
//            printf("Rownanie ma jedno rozwiazanie: x = %.2lf", x1);
//        } else {
//            printf("Rownanie nie ma rozwiazan (delta < 0).");
//        }
//    }

//    Zad 8
//    Napisz program, który przyjmuje dwie liczby ca³kowite
//    jako wejœcie od u¿ytkownika i u¿ywa operatora warunkowego,
//    aby znaleŸæ i wyœwietliæ najwiêksz¹ z nich.

//    int a, b, max;
//    printf("Podaj dwie liczby calkowite: ");
//    scanf("%d %d", &a, &b);
//
//    max = (a > b) ? a : b;
//
//    printf("Najwieksza liczba to: %d", max);

//    Zad 9
//    Napisz program, który przyjmuje trzy liczby ca³kowite
//    jako wejœcie od u¿ytkownika i u¿ywa operatora warunkowego,
//    aby znaleŸæ i wyœwietliæ najmniejsz¹ z nich.

//    int a, b, c, min;
//    printf("Podaj trzy liczby calkowite: ");
//    scanf("%d %d %d", &a, &b, &c);
//
//    min = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
//
//    printf("Najmniejsza z nich to: %d", min);

//    Zad 10
//    U¿ywaj¹c operatora warunkowego ?, napisz program,
//    który przyjmuje od u¿ytkownika jedn¹ liczbê ca³kowit¹
//    i wyœwietla “parzysta” lub “nieparzysta” w zale¿noœci od wartoœci liczby.

//    int liczba;
//    printf("Podaj liczbe calkowita: ");
//    scanf("%d", &liczba);
//
//    printf("%s", (liczba % 2 == 0) ? "parzysta" : "nieparzysta");

//    Zad 11
//    Stwórz program, który prosi o wprowadzenie dwóch
//    liczb zmiennoprzecinkowych i u¿ywa operatora warunkowego,
//    aby wyœwietliæ, która z nich jest wiêksza, lub czy
//    s¹ równe z dok³adnoœci¹ do dwóch miejsc po przecinku.

//    double a, b;
//
//    printf("Podaj dwie liczby zmiennoprzecinkowe: ");
//    scanf("%lf %lf", &a, &b);
//
//    (a - b == 0) ? printf("Liczby sa rowne") : ((a > b) ? printf("Wieksza liczba to: %.2lf", a) : printf("Wieksza liczba to: %.2lf", b));

//    Zad 12
//    U¿ywaj¹c operatora warunkowego, napisz program, który
//    prosi u¿ytkownika o wprowadzenie oceny w skali od 0 do 100
//    i wyœwietla “Zdane”, jeœli ocena jest wiêksza lub równa 51,
//    lub “Nie zdane” w przeciwnym przypadku.

//    int ocena;
//    printf("Podaj wynik w skali od 0 do 100: ");
//    scanf("%d", &ocena);
//
//    printf("Wynik: %s", (ocena >= 51) ? "Zdane" : "Nie zdane");

//    Zad 13
//    Napisz program, który przyjmuje rok jako wejœcie
//    od u¿ytkownika i za pomoc¹ operatora warunkowego sprawdza,
//    czy jest to rok przestêpny. Program powinien wyœwietlaæ
//    “Rok przestêpny” lub “Rok nieprzestepny” w zale¿noœci od wyniku.

//    int rok;
//    printf("Podaj rok: ");
//    scanf("%d", &rok);
//
//    printf("%s", ((rok % 4 == 0 && rok % 100 != 0) || (rok % 400 == 0)) ? "Rok przestepny" : "Rok nieprzestepny");

    return 0;
}
