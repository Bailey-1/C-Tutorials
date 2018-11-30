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

    int total = number1 + number2 + number3;
    float average = total / 3;

    printf("%d+%d+%d=%d", number1, number2, number3, total);
    printf("\nAverage: %f", average);

    getchar();
    return 0;
}
