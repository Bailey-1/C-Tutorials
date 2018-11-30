#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3;

    printf("Enter Number 1: ");
    scanf("%d", &number1);

    printf("Enter Number 2: ");
    scanf("%d", &number2);

    printf("Enter Number 3: ");
    scanf("%d", &number3);

    printf("Number 3: %d\nNumber 2: %d\nNumber 1: %d", number3, number2, number1);

    getchar();
    return 0;
}
