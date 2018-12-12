#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2, num3, num4, num5, oddTotal = 0, evenTotal = 0;

    printf("Number 1:");
    scanf("%d", &num1);

    printf("Number 2:");
    scanf("%d", &num2);

    printf("Number 3:");
    scanf("%d", &num3);

    printf("Number 4:");
    scanf("%d", &num4);

    printf("Number 5:");
    scanf("%d", &num5);

    if (num1%2 == 0){
        printf("Num1 is even\n");
        evenTotal += 1;
    }
    else {
        printf("Num1 is odd\n");
        oddTotal += 1;
    }

    if (num2%2 == 0){
        printf("Num2 is even\n");
        evenTotal += 1;
    }
    else {
        printf("Num2 is odd\n");
        oddTotal += 1;
    }

    if (num3%2 == 0){
        printf("Num3 is even\n");
        evenTotal += 1;
    }
    else {
        printf("Num3 is odd\n");
        oddTotal += 1;
    }

    if (num4%2 == 0){
        printf("Num4 is even\n");
        evenTotal += 1;
    }
    else {
        printf("Num4 is odd\n");
        oddTotal += 1;
    }

    if (num5%2 == 0){
        printf("Num5 is even\n");
        evenTotal += 1;
    }
    else {
        printf("Num5 is odd\n");
        oddTotal += 1;
    }

    printf("Even: %d\n", evenTotal);
    printf("Odd: %d\n", oddTotal);


    return 0;
}
