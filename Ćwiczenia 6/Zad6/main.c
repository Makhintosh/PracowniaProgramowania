#include <stdio.h>
#include <stdlib.h>

int main()
{
//    Zad 1
//    Napisz program, który wyœwietla
//    wszystkie liczby ca³kowite od 1 do 100, u¿ywaj¹c pêtli for.

//    for (int i = 1; i <= 100; i++) {
//        printf("%d ", i);
//    }
//    printf("\n");

//    Zad 2
//    Utwórz program, który prosi u¿ytkownika o wprowadzenie liczby ca³kowitej n, a nastêpnie wyœwietla sumê wszystkich liczb ca³kowitych od 1 do n u¿ywaj¹c pêtli while.

//    int n, sum = 0, i = 1;
//
//    printf("Podaj liczbe calkowita n: ");
//    scanf("%d", &n);
//
//    while (i <= n) {
//        sum += i;
//        i++;
//    }
//
//    printf("Suma liczb od 1 do %d wynosi: %d\n", n, sum);

//    Zad 3
//    Napisz program, który czyta od u¿ytkownika liczby ca³kowite do momentu wprowadzenia zera i nastêpnie wyœwietla sumê wszystkich wprowadzonych liczb dodatnich oraz sumê wszystkich liczb ujemnych (osobno), u¿ywaj¹c pêtli do-while.

//    int liczba;
//    int suma_dodatnich = 0;
//    int suma_ujemnych = 0;
//
//    do {
//        printf("Podaj liczbe calkowita (0 konczy): ");
//        scanf("%d", &liczba);
//
//        if (liczba > 0) {
//            suma_dodatnich += liczba;
//        } else if (liczba < 0) {
//            suma_ujemnych += liczba;
//        }
//    } while (liczba != 0);
//
//    printf("Suma liczb dodatnich: %d\n", suma_dodatnich);
//    printf("Suma liczb ujemnych: %d\n", suma_ujemnych);

//    Zad 4
//    Stwórz program, który oblicza i wyœwietla silniê podanej przez u¿ytkownika nieujemnej liczby ca³kowitej, u¿ywaj¹c pêtli for.

//    int n;
//    unsigned long long silnia = 1;
//
//    printf("Podaj nieujemna liczbe calkowita: ");
//    scanf("%d", &n);
//
//    for (int i = 1; i <= n; i++) {
//        silnia *= i;
//    }
//
//    printf("Silnia z %d wynosi: %llu\n", n, silnia);

//    Zad 5
//    Napisz program, który wyœwietla pierwszych 10 liczb ci¹gu Fibonacciego, u¿ywaj¹c pêtli while.

//    int a = 0, b = 1, nastepna;
//    int licznik = 0;
//
//    printf("Pierwsze 10 liczb ciagu Fibonacciego:\n");
//
//    while (licznik < 10) {
//        printf("%d ", a);
//        nastepna = a + b;
//        a = b;
//        b = nastepna;
//        licznik++;
//    }
//    printf("\n");

//    Zad 6
//    Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej liczby ca³kowitej n, a nastêpnie oblicza i wyœwietla [sqrt(n)] (czêœæ ca³kowita/pod³oga pierwiastka kwadratowego).

//    int n;
//
//    printf("Podaj dodatnia liczbe calkowita n: ");
//    scanf("%d", &n);
//
//    if (n > 0) {
//        double podloga = floor(sqrt(n));
//        printf("Podloga pierwiastka kwadratowego z %d: %.0f\n", n, podloga);
//    } else {
//        printf("Liczba nie jest dodatnia.\n");
//    }

//    Zad 7
//    Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej liczby ca³kowitej n, a nastêpnie oblicza i wyœwietla [sqrt(n)] (sufit pierwiastka kwadratowego).

//    int n;
//
//    printf("Podaj dodatnia liczbe calkowita n: ");
//    scanf("%d", &n);
//
//    if (n > 0) {
//        double sufit = ceil(sqrt(n));
//        printf("Sufit pierwiastka kwadratowego z %d: %.0f\n", n, sufit);
//    } else {
//        printf("Liczba nie jest dodatnia.\n");
//    }

//    Zad 8
//    Napisz program, który prosi u¿ytkownika o wprowadzenie 10 dodatnich liczb ca³kowitych i ustawia je w ci¹g a1, ..., a10. Oblicz i wyœwietl ile elementów ci¹gu spe³nia nierównoœæ a_k < (a_{k-1} + a_{k+1}) / 2 dla 1 < k < 10.
//
//    int a[10];
//    int wynik = 0;
//
//    printf("Podaj 10 dodatnich liczb calkowitych:\n");
//    for (int i = 0; i < 10; i++) {
//        printf("a%d: ", i + 1);
//        scanf("%d", &a[i]);
//    }
//
//    for (int k = 1; k < 9; k++) {
//        if (a[k] < (a[k-1] + a[k+1]) / 2.0) {
//            wynik++;
//        }
//    }
//
//    printf("Liczba elementow spelniajacych nierownosc: %d\n", wynik);

//    Zad 9
//    Napisz program, który prosi u¿ytkownika o wprowadzenie dodatniej liczby ca³kowitej n, a nastêpnie n dodatnich liczb ca³kowitych i ustawia je w ci¹g a1, ..., an. Oblicz i wyœwietl ile elementów ci¹gu spe³nia nierównoœæ a_k < (a_{k-1} + a_{k+1}) / 2 dla 1 < k < n.

//    int n;
//    int wynik = 0;
//
//    printf("Podaj dlugosc ciagu n (wieksza niz 2): ");
//    scanf("%d", &n);
//
//    if (n < 3) {
//        printf("Ciag jest za krotki aby sprawdzic warunek dla 1 < k < n.\n");
//        return 0;
//    }
//
//    int a[n];
//
//    printf("Podaj %d dodatnich liczb calkowitych:\n", n);
//    for (int i = 0; i < n; i++) {
//        printf("a%d: ", i + 1);
//        scanf("%d", &a[i]);
//    }
//
//    for (int k = 1; k < n - 1; k++) {
//        if (a[k] < (a[k-1] + a[k+1]) / 2.0) {
//            wynik++;
//        }
//    }
//
//    printf("Liczba elementow spelniajacych nierownosc: %d\n", wynik);

//    Zad 10
//    Napisz program, który sprawdza podzielnoœæ liczby n przez wszystkie liczby od 2 do n/2. Program powinien wypisaæ wszystkie dzielniki tej liczby. Wczytaj wartoœæ n od u¿ytkownika.

//    int n;
//
//    printf("Podaj liczbe n: ");
//    scanf("%d", &n);
//
//    printf("Dzielniki liczby %d w przedziale od 2 do %d to:\n", n, n / 2);
//
//    for (int i = 2; i <= n / 2; i++) {
//        if (n % i == 0) {
//            printf("%d ", i);
//        }
//    }
//    printf("\n");


//    Zad 11
//    Napisz program, który wczytuje liczbê ca³kowit¹ n i wypisuje wszystkie jej cyfry od koñca (od cyfry jednoœci) oraz oblicza ich sumê.

//    int n, suma = 0, cyfra;
//
//    printf("Podaj liczbe calkowita: ");
//    scanf("%d", &n);
//
//    n = abs(n);
//
//    printf("Cyfry od konca: ");
//
//    if (n == 0) {
//        printf("0\n");
//        printf("Suma cyfr: 0\n");
//        return 0;
//    }
//
//    while (n > 0) {
//        cyfra = n % 10;
//        printf("%d ", cyfra);
//        suma += cyfra;
//        n /= 10;
//    }
//
//    printf("\nSuma cyfr: %d\n", suma);

//    Zad 12
//    Napisz program realizuj¹cy algorytm Euklidesa w wersji iteracyjnej z odejmowaniem. Program powinien wczytaæ dwie liczby naturalne a i b, a nastêpnie wypisaæ ich najwiêkszy wspólny dzielnik.

//    int a, b;
//
//    printf("Podaj dwie liczby naturalne (a i b): ");
//    scanf("%d %d", &a, &b);
//
//    if (a <= 0 || b <= 0) {
//        printf("Obie liczby musza byc naturalne (wieksze od zera)!\n");
//        return 1;
//    }
//
//    int org_a = a, org_b = b;
//
//    while (a != b) {
//        if (a > b) {
//            a = a - b;
//        } else {
//            b = b - a;
//        }
//    }
//
//    printf("NWD(%d, %d) = %d\n", org_a, org_b, a);

//    Zad 13
//    Napisz program realizuj¹cy algorytm Euklidesa w wersji iteracyjnej z dzieleniem. Program powinien wczytaæ dwie liczby naturalne a i b, a nastêpnie wypisaæ ich najwiêkszy wspólny dzielnik.

//    int a, b, reszta;
//
//    printf("Podaj dwie liczby naturalne (a i b): ");
//    scanf("%d %d", &a, &b);
//
//    if (a <= 0 || b <= 0) {
//        printf("Obie liczby musza byc naturalne (wieksze od zera)!\n");
//        return 1;
//    }
//
//    int org_a = a, org_b = b;
//
//    while (b != 0) {
//        reszta = a % b;
//        a = b;
//        b = reszta;
//    }
//
//    printf("NWD(%d, %d) = %d\n", org_a, org_b, a);

//    Zad 14
//    Napisz program, który sprawdza, czy dana liczba n jest liczb¹ pierwsz¹. Program powinien sprawdziæ wszystkie potencjalne dzielniki od 2 do pierwiastka z n (wykorzystaj pêtlê do obliczenia pierwiastka). Wypisz odpowiedni komunikat.

//    int n, pierwiastek = 0;
//    int czy_pierwsza = 1;
//
//    printf("Podaj liczbe naturalna n (wieksza od 1): ");
//    scanf("%d", &n);
//
//    if (n < 2) {
//        printf("Liczba %d nie jest ani pierwsza, ani zlozona.\n", n);
//        return 0;
//    }
//
//    while ((pierwiastek + 1) * (pierwiastek + 1) <= n) {
//        pierwiastek++;
//    }
//
//    for (int i = 2; i <= pierwiastek; i++) {
//        if (n % i == 0) {
//            czy_pierwsza = 0;
//            break;
//        }
//    }
//
//    if (czy_pierwsza) {
//        printf("Liczba %d JEST liczba pierwsza.\n", n);
//    } else {
//        printf("Liczba %d NIE JEST liczba pierwsza.\n", n);
//    }

//    Zad 15
//    Napisz program symuluj¹cy wydawanie reszty. Program powinien wczytaæ kwotê do wydania i wypisaæ, ile monet o nomina³ach 5, 2 i 1 nale¿y wydaæ, aby u¿yæ jak najmniejszej liczby monet. Wypisz liczbê monet ka¿dego typu.

//    int kwota;
//    int m5 = 0, m2 = 0, m1 = 0;
//
//    printf("Podaj kwote do wydania (w pelnych zlotych): ");
//    scanf("%d", &kwota);
//
//    if (kwota < 0) {
//        printf("Kwota nie moze byc ujemna.\n");
//        return 1;
//    }
//
//    int pozostalo = kwota;
//
//    m5 = pozostalo / 5;
//    pozostalo %= 5;
//
//    m2 = pozostalo / 2;
//    pozostalo %= 2;
//
//    m1 = pozostalo;
//
//    printf("Do wydania %d zl potrzeba:\n", kwota);
//    printf("Monety 5 zl: %d\n", m5);
//    printf("Monety 2 zl: %d\n", m2);
//    printf("Monety 1 zl: %d\n", m1);

//    Zad 16
//    Napisz program, który wyznacza przybli¿on¹ wartoœæ pierwiastka kwadratowego z liczby a metod¹ Newtona (iteracyjn¹). Pocz¹tkowe przybli¿enie x_0 = a/2, a kolejne obliczamy ze wzoru x_{i+1} = (x_i + a/x_i)/2. Wykonaj 10 iteracji algorytmu i wypisz koñcowy wynik.

//    double a;
//
//    printf("Podaj liczbe a, z ktorej chcesz wyciagnac pierwiastek: ");
//    scanf("%lf", &a);
//
//    if (a < 0) {
//        printf("Pierwiastek w liczbach rzeczywistych nie istnieje dla liczb ujemnych.\n");
//        return 1;
//    }
//
//    if (a == 0) {
//        printf("Przyblizona wartosc pierwiastka: 0\n");
//        return 0;
//    }
//
//    double x = a / 2.0;
//
//    for (int i = 0; i < 10; i++) {
//        x = (x + a / x) / 2.0;
//    }
//
//    printf("Przyblizona wartosc pierwiastka z %.4f (po 10 iteracjach) wynosi: %.6f\n", a, x);

//    Zad 17
//    Napisz program, który wczytuje od u¿ytkownika stopieñ wielomianu, wspó³czynniki (od najwy¿szej potêgi do wyrazu wolnego) oraz wartoœæ x. Oblicz wartoœæ wielomianu za pomoc¹ schematu Hornera, wykorzystuj¹c pêtlê. Wyœwietl wynik obliczeñ.

//    int stopien;
//    double x;
//
//    printf("Podaj stopien wielomianu: ");
//    scanf("%d", &stopien);
//
//    if (stopien < 0) {
//        printf("Stopien wielomianu nie moze byc ujemny.\n");
//        return 1;
//    }
//
//    double wspolczynniki[stopien + 1];
//
//    printf("Podaj wspolczynniki (od najwyzszej potegi do wyrazu wolnego):\n");
//    for (int i = 0; i <= stopien; i++) {
//        printf("Wspolczynnik przy x^%d: ", stopien - i);
//        scanf("%lf", &wspolczynniki[i]);
//    }
//
//    printf("Podaj wartosc x, dla ktorej obliczyc wielomian: ");
//    scanf("%lf", &x);
//
//    double wynik = wspolczynniki[0];
//
//    for (int i = 1; i <= stopien; i++) {
//        wynik = wynik * x + wspolczynniki[i];
//    }
//
//    printf("Wartosc wielomianu dla x = %.2f wynosi: %.4f\n", x, wynik);

    return 0;
}
