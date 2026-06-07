#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int czyPalindrom(char * str){
    int len = strlen(str);

    int lewy = 0;
    int prawy = len - 1;

    while (lewy < prawy){
        char znakLewy = str[lewy];
        char znakPrawy = str[prawy];

        if (znakLewy >= 'A' && znakLewy <= 'Z'){
            znakLewy = znakLewy + ('a' - 'A');
        }
        if (znakPrawy >= 'A' && znakPrawy <= 'Z'){
            znakPrawy = znakPrawy + ('a' - 'A');
        }

        if (znakLewy != znakPrawy){
            return 0;
        }

        lewy++;
        prawy--;
    }
    return 1;
}

int firstDiffIndex(char * a, char * b){
    int count = 0;
    while (a[count] == b[count]){

        if (a[count] == '\0'){
            return -1;
        }
        count++;
    }
    return count;
}

void szyfruj(char * tablica, int klucz){
    int len = strlen(tablica);
    int i = 0;
    while (i < len){
        if (tablica[i] + klucz > 'z'){
            tablica[i] = (tablica[i] - 26) + klucz;
        } else {
            tablica[i] = tablica[i] + klucz;
        }
        i++;

    }
}

void usunDuplikaty(char * napis){
    int i = 0;
    int j = 0;
    while (napis[i] != '\0'){
        if (napis[i] != napis[i + 1]){
            napis[j] = napis[i];
            j++;
        }
        i++;
    }
    napis[j] = '\0';
}

int zliczSlowa(char * napis){
    int i = 0;
    int count = 0;
    while (napis[i] != '\0'){
        if (napis[i] != ' '){
            if (i == 0 || napis[i - 1] == ' '){
                count++;
            }
        }
        i++;
    }
    return count;
}

int liczZera(int rows, int columns, int tab[rows][columns]){
    int zera = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            if (tab[i][j] == 0){
                zera++;
            }
        }
    }
    return zera;
}
int minInCol(int rows, int cols, int tab[rows][cols], int col){
    int min = tab[0][col];
    for (int i = 1; i < rows; i++){
        if (tab[i][col] < min){
            min = tab[i][col];
        }
    }
    return min;
}
int sumaPrzekatnej(int n, int tab[n][n]){
    int suma = 0;
    for (int i = 0; i < n; i++){
        suma += tab[i][i];
    }
    return suma;
}

int maxSumRow(int rows, int cols, int tab[rows][cols]){
    int maxSuma = 0;
    int maxIndex = 0;
    for(int i = 0; i < rows; i++){
        int obecnaSuma = 0;
        for (int j = 0; j < cols; j++){
            obecnaSuma += tab[i][j];
        }
        if (i == 0 || obecnaSuma > maxSuma){
            maxSuma = obecnaSuma;
            maxIndex = i;
        }
    }
    return maxIndex;
}

int sumaBrzegowa(int rows, int cols, int tab[rows][cols]){
    int suma = 0;
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            if(i == 0 || i == rows - 1 || j == 0 || j == cols - 1){
                suma += tab[i][j];
            }
        }
    }
    return suma;
}

struct Book{
    char * title;
    int year;
};

int countBookAfterYear(struct Book arr[], int n, int yearLimit){
    int count = 0;

    for (int i = 0; i < n; i++){
        if (arr[i].year > yearLimit){
            count++;
        }
    }
    return count;
}

struct Sklep{
    char * nazwaProduktu;
    int ilosc;
    float wartosc;
};

float obliczWartoscCalkowita(struct Sklep arr[], int n){
    float suma = 0.0;
    for (int i = 0; i < n; i++){
        suma += (arr[i].ilosc * arr[i].wartosc);
    }
    return suma;
}

struct Employee{
    char * name;
    float salary;
};

int indexHighestSalary(struct Employee arr[], int n){
    int maxSalary = arr[0].salary;
    int index = 0;
    for(int i = 1; i < n; i++){
        if (arr[i].salary > maxSalary){
            maxSalary = arr[i].salary;
            index = i;
        }
    }
    return index;
}

struct Student{
    char * name;
    char * major;
};

int countByMajor(struct Student arr[], int n, char * targetMajor){
    int count = 0;
    for (int i = 0; i < n; i++){
        if (strcmp(arr[i].major, targetMajor) == 0){
            count++;
        }
    }
    return count;
}

struct Student1{
    char * name;
    int grades[3];
};

int bestStudent(struct Student1 arr[], int n){
    float best = arr[0].grades[0] + arr[0].grades[1] + arr[0].grades[2];
    int index = 0;
    for (int i = 1; i < n; i++){
        int suma = 0;
        for (int j = 0; j < 3; j++){
            suma += arr[i].grades[j];
        }
        if (suma > best){
            best = suma;
            index = i;
        }
    }
    return index;
}

struct element{
    int x;
    struct element * next;
};

int sumujListe(struct element * lista){
    int suma = 0;
    struct element * temp = lista;
    while (temp != NULL){
        suma += temp->x;
        temp = temp->next;
    }
    return suma;
}

int sumujListeGlowa(struct element * lista){
    int suma = 0;
    struct element * temp = lista -> next;
    while (temp != NULL){
        suma += temp->x;
        temp = temp->next;
    }
    return suma;
}

int countNodes(struct element * lista){
    int count = 0;
    struct element * temp = lista;
    while (temp != NULL){
        count++;
        temp = temp -> next;
    }
    return count;
}


int main()
{
    char str[] = "KAjak";
    printf("%d\n", czyPalindrom(str));

    char a[] = "kotek";
    char b[] = "koteki";
    printf("%d\n", firstDiffIndex(a, b));

    char napis[] = "witamz";
    szyfruj(napis, 3);
    printf("%s\n", napis);

    char napis2[] = "aaaaaabbbcc";
    usunDuplikaty(napis2);
    printf("%s\n", napis2);

    char napis3[] = "siema eniu co tam ";
    printf("Slowa: %d\n", zliczSlowa(napis3));

    int tablica[2][4] = {
        {1, 0, 1, 0},
        {0, 1, 0, 1},
    };
    printf("Liczba zer: %d\n", liczZera(2, 4, tablica));

    int tablica2[3][2] = {
        {3, 9},
        {1, 7},
        {4, 8},
    };
    printf("Najmniejsza wartosc w kolumnie %d, to: %d\n", 1, minInCol(3, 2, tablica2, 1));

    int tablica3[3][3] = {
        {1, 9, 3},
        {1, 1, 4},
        {4, 8, 1},
    };
    printf("Suma wartosci przekatnej: %d\n", sumaPrzekatnej(3, tablica3));

    int tablica4[3][4] = {
        {1, 1, 1, 1},
        {2, 5, 1, 0},
        {3, 2, 1, 1}
    };
    printf("Wiersz z najwieksza suma ma indeks: %d\n", maxSumRow(3, 4, tablica4));

    int tablica5[3][3] = {
        {1, 1, 1},
        {1, 10, 1},
        {1, 1, 1},
    };
    printf("Suma wierzcholkow: %d\n", sumaBrzegowa(3, 3, tablica5));

    struct Book tablica6[] = {
        {"Wladca Pierscieni", 1954},
        {"Harry Potter i Kamien Filozoficzny", 1997},
        {"Pan Tadeusz", 1834},
        {"Wiedzmin: Ostatnie Zyczenie", 1993}
    };
    int wynik = countBookAfterYear(tablica6, 4, 1990);
    printf("Liczba ksiazek wydanych po 1990 roku: %d\n", wynik);

    struct Sklep produkt[] = {
        {"Produkt A", 10, 17.50},
        {"Inny produkt", 20, 10.20}
    };
    printf("%.2f\n", obliczWartoscCalkowita(produkt, 2));

    struct Employee pracownicy[] = {
        {"Jan Kowalski", 5000.0},
        {"Anna Nowak", 6200.0},    // Indeks 1 (ten powinien wygraæ)
        {"Piotr Wisniewski", 6200.0} // Indeks 2
    };
    printf("Indeks pracownika z najwyzsza pensja to: %d\n", indexHighestSalary(pracownicy, 3));

    struct Student studenci[] = {
        {"Jan", "Informatyka"},
        {"Julia", "Informatyka"},
        {"Krzysztof", "blabla"}
    };
    printf("Ilosc studentow na informatyce: %d\n", countByMajor(studenci, 3, "Informatyka"));

    struct Student1 studenci1[] = {
        {"Jan", {3, 4, 3}},   // Suma: 10
        {"Anna", {5, 5, 4}},  // Suma: 14 -> Wygrywa (indeks 1)
        {"Piotr", {2, 3, 2}}  // Suma: 7
    };
    printf("%d\n", bestStudent(studenci1, 3));

//    Bez glowy

//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    wsk1 -> x = 4;
//    wsk1 -> next = wsk2;
//
//    wsk2 -> x = 7;
//    wsk2 -> next = wsk3;
//
//    wsk3 -> x = 9;
//    wsk3 -> next = NULL;
//
//    struct element * lista = wsk1;
//
//    int wynik1 = sumujListe(lista);
//    printf("Suma elementow listy wynosi: %d\n", wynik1);

//    Z glowa

//    struct element * lista = malloc(sizeof(struct element));
//    struct element * wsk1 = malloc(sizeof(struct element));
//    struct element * wsk2 = malloc(sizeof(struct element));
//    struct element * wsk3 = malloc(sizeof(struct element));
//
//    lista -> next = wsk1;
//
//    wsk1 -> x = 4;
//    wsk1 -> next = wsk2;
//
//    wsk2 -> x = 7;
//    wsk2 -> next = wsk3;
//
//    wsk3 -> x = 9;
//    wsk3 -> next = NULL;
//
//    int wynik1 = sumujListeGlowa(lista);
//    printf("Suma elementow listy wynosi: %d\n", wynik1);

    struct element * wsk1 = malloc(sizeof(struct element));
    struct element * wsk2 = malloc(sizeof(struct element));
    struct element * wsk3 = malloc(sizeof(struct element));

    wsk1 -> x = 4;
    wsk1 -> next = wsk2;

    wsk2 -> x = 7;
    wsk2 -> next = wsk3;

    wsk3 -> x = 9;
    wsk3 -> next = NULL;

    struct element * lista = wsk1;

    int wynik1 = countNodes(lista);
    printf("Nodes: %d\n", wynik1);

    return 0;
}
