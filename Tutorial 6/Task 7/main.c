#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char firstname[20];
    char secondname[20];
    int age;
    char birthdate[20];
    int height;
    char petname[20];
    char colour[20];

    printf("\nFirst Name: ");
    fgets(firstname, 100, stdin);
    //getchar();
    fflush(stdin);

    printf("\nSecond Name: ");
    fgets(secondname, 100, stdin);
    //getchar();
    fflush(stdin);

    printf("\nAge: ");
    scanf("%d", &age);

    fflush(stdin);

    printf("\nDate of Birth: ");
    fgets(birthdate, 100, stdin);
    //getchar();
    fflush(stdin);

    printf("\nHeight in CM: ");
    scanf("%d", &height);

    fflush(stdin);

    printf("\nPet Name: ");
    fgets(petname, 100, stdin);
    //getchar();
    fflush(stdin);

    printf("\nFav Colour: ");
    fgets(colour, 100, stdin);
    //getchar();
    fflush(stdin);

    printf("\n%s", firstname);
    printf("\n%s", secondname);
    printf("\n%d", age);
    printf("\n%s", birthdate);
    printf("\n%d", height);
    printf("\n%s", petname);
    printf("\n%s", colour);

    printf("There once was a student called %s %s. They were %d years old and born on %s. They are %d cm tall. They have a pet called %s and their favourite colour is %s", firstname, secondname, age, birthdate, height, petname, colour);

    return 0;
}
