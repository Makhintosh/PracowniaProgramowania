#include <stdio.h>
#include <stdlib.h>

//Zad 1

struct Car{
    char *brand;
    char *model;
    int year;
    int isAvailable;
};

//Zad 2

struct Student{
    char *firstName;
    char *lastName;
    int id;
    float gpa;
};

//Zad 3

struct Rectangle{
    float width;
    float height;
    char *color;
};

//Zad 4

struct WeatherInfo{
    float temperature;
    float humidity;
    float windSpeed;
};

//Zad 5

struct Book{
    char *title;
    char *author;
    int publishedYear;
    int pages;
};

//Zad 6

struct Person{
    char name[20];
    int age;
};

struct Person* initPerson(const char* name, int age){
    struct Person* newPerson = (struct Person*)malloc(sizeof(struct Person));
    if (newPerson != NULL){
        strncpy(newPerson -> name, name, 19);
        newPerson -> name[19] = '\0';
        newPerson -> age = age;
    }
    return newPerson;
};

void showPerson(struct Person p){
    printf("Imie: %s, Wiek: %d", p.name, p.age);
};

void birthday(struct Person* p){
    if (p != NULL){
        p->age += 1;
    }
}

//Zad 7

struct Car1 {
    char brand[20];
    int mileage;
};

struct Car1 initCar(const char* brand, int mileage){
    struct Car1 newCar;
    strncpy(newCar.brand, brand, 19);
    newCar.brand[19] = '\0';
    newCar.mileage = mileage;
    return newCar;
};

void showCar(struct Car1 c){
    printf("Marka: %s, Przebieg: %d km\n", c.brand, c.mileage);
};

void mileageService(struct Car1* c){
    c -> mileage += 10000;
};

//Zad 8

struct Book1{
    char title[50];
    int page_count;
};

struct Book1 initBook(const char* title, int page_count){
    struct Book1 newBook;
    strncpy(newBook.title, title, sizeof(newBook.title) - 1);
    newBook.title[sizeof(newBook.title) - 1] = '\0';
    newBook.page_count = page_count;
    return newBook;
};

void showBook(struct Book1 b){
    printf("Tytul: %s, ilosc stron: %d\n", b.title, b.page_count);
};

void addPages(struct Book1* b){
    b -> page_count += 10;
};

int main()
{

//    Zad 1

    struct Car car1 = {"Audi", "A4 B5", 1999, 1};
    struct Car car2 = {"Chevrolet", "Camaro", 2028, 1};


//    Zad 2

    struct Student student1 = {"Adam", "Kowalski", 1, 3.45f};
    struct Student student2 = {"Krzysztof", "Sobaniec", 2, 2.99f};
    struct Student student3 = {"Wiktor", "Gdyba", 3, 5.00f};

    struct Student tablicaStudentow[3] = {student1, student2, student3};

//    Zad 3

    struct Rectangle rectangles[4] = {
        {10.5f, 5.0f, "blue"},
        {12.6f, 6.7f, "pink"},
        {13.2f, 9.8f, "orange"},
        {21.6f, 2.0f, "green"}
    };

//    Zad 4

    struct WeatherInfo pogodaOlsztyn = {23.0f, 30.0f, 15.2f};
    struct WeatherInfo pogodaSzczytno = {22.5f, 40.5f, 30.6f};
    struct WeatherInfo pogodaElk = {21.0f, 32.0f, 19.2f};

//    Zad 5

    struct Book library[5] = {
        {"Hobbit", "Igor Szatkowski", 984, 3000},
        {"Wladca pierscienia", "Walaszek", 1994, 200},
        {"Pies, ktory jezdzil kolejom", "J.K Rawlings", 1845, 900},
        {"Dzieci z bulerbyn", "Ktostam", 1543, 645},
        {"Dzuma", "Albert Camus", 1743, 200}
    };

//    Zad 6

//    struct Person* myPerson = initPerson("Igor", 21);
//
//    showPerson(*myPerson);
//    birthday(myPerson);
//    showPerson(*myPerson);
//
//    free(myPerson);

//    Zad 7

//    struct Car1 myCar = initCar("Audi", 273500);
//    showCar(myCar);
//
//    mileageService(&myCar);
//    showCar(myCar);

//    Zad 8

    struct Book1 myBook = initBook("Biografia Igora Szatkowskiego", 10);
    showBook(myBook);

    addPages(&myBook);
    showBook(myBook);

    return 0;
}
