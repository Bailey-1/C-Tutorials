#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;

    printf("Please enter Number 1: ");
    scanf("%d", &number1);
    printf("Please enter Number 2: ");
    scanf("%d", &number2);

    if (10 < number1 && number1 < 20){
        printf("Number 1 is between 10 and 20\n");
    }

    if (number1 == 1234 || number2 == 1234){
        printf("Number 1 or Number 2 is equal to 1234\n");
    }

    if (0 < number1 && 12 < number2 && number2 < 32){
        printf("Number 1 is greater than 0 and Number 2 is between 12 and 32\n");
    }
    if (number1 > number2 || number1 < 0){
        printf("Number 1 is greater than Number 2 or Number 1 is Negative\n");
    }

    return 0;
}
