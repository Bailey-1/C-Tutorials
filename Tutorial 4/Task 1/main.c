#include <stdio.h>
#include <stdlib.h>

int main()
{
    int currentYear, birthYear, age;

    printf("Please enter the current year:");
    scanf("%d", &currentYear);

    printf("Please enter your birthday mate:");
    scanf("%d", &birthYear);

    age = currentYear - birthYear;
    //printf("%d\n", age);

    if (age == 18){
        printf("You are 18 years old.");
    }
    else if (age > 18) {
        printf("You are over 18");
    }
    else {
        printf("YOu ArE nOt 18 YeArs Old");
    }

    return 0;
}
