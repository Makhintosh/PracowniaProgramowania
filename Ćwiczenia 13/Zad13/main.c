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

struct Person *initPerson(char *name, int age){

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


    return 0;
}
