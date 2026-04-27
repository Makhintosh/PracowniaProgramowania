#include <stdio.h>
#include <stdlib.h>

//Zad 1

int length(char *str){
    int len = 0;
    while (str[len] != '\0'){
        len++;
    }
    return len;
}

//Zad 2

int countNums(char *str){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        if(str[i] >= '0' && str[i] <= '9'){
            count++;
        }
        i++;
    }
    return count;
}

//Zad 3

int countVow(char *str){
    int count = 0;
    int i = 0;
    while(str[i] != '\0'){
        char c = str[i];
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'Y'){
            count++;
        }
        i++;
    }
    return count;
}

//Zad 4

int cmpStrNew(char str1[], char str2[]){
    int i = 0;
    while(str1[i] != '\0' && str2[i] != '\0'){
        if (str1[i] != str2[i]){
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0'){
        return 1;
    }
    return 0;
}

//Zad 5

int lexComp(char str1[], char str2[]){
    int i = 0;
    while (str1[i] != '\0' && str1[i] == str2[i]){
        if (str1[i] < str2[i]){
            return 1;
        }
        i++;
    }
}

//Zad 6

//int toLowerNew(char str[]){
//    int i = 0;
//    while (str[i] != '\0'){
//        if (str[i] >= 'A')
//    }
//}

int main()
{
//    Zad 1

//    char test_str[] = "Elo Zelo";
//    printf("Napis: %s, dlugosc napisu: %d", test_str, length(test_str));

//    Zad 2

//    char tekst[] = "Ala ma 15 butelek p³ynu do mycia naczyñ i oddaje Stasiowi 3.";
//    printf("Napis: %s\nLiczba cyfr: %d", tekst, countNums(tekst));

//    Zad 3

//    char napis[] = "siema";
//    printf("Napis: %s\nLiczba samoglosek: %d", napis, countVow(napis));

//    Zad 4

//    char str1[] = "Hello World";
//    char str2[] = "Hello World";
//    printf("%d", cmpStrNew(str1, str2));

//    Zad 5

    char str1[] = "Ananas";
    char str2[] = "ananas";
    printf("%d", lexComp(str1, str2));


    return 0;
}
