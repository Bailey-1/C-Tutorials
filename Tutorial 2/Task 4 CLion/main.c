#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    float number3, number4;

    printf("Enter Int Number 1: ");
    scanf("%d", &number1);

    printf("Enter Int Number 2: ");
    scanf("%d", &number2);

    printf("Enter Float Number 3: ");
    scanf("%f", &number3);

    printf("Enter Float Number 4: ");
    scanf("%f", &number4);

    int n1n2Add, n1n2Sub, n1n2Mul, n1n2Div;
    n1n2Add = number1 + number2;
    n1n2Sub = number1 - number2;
    n1n2Div = number1 / number2;
    n1n2Mul = number1 * number2;

    float n3n4Add, n3n4Sub, n3n4Div, n3n4Mul;
    n3n4Add = number1 + number2;
    n3n4Sub = number1 - number2;
    n3n4Div = number1 / number2;
    n3n4Mul = number1 * number2;

    printf("%d + %d = %d\n",number1, number2, n1n2Add);
    printf("%d - %d = %d\n",number1, number2, n1n2Sub);
    printf("%d / %d = %d\n",number1, number2, n1n2Div);
    printf("%d * %d = %d\n",number1, number2, n1n2Mul);

    printf("%f + %f = %f\n",number3, number4, n3n4Add);
    printf("%f - %f = %f\n",number3, number4, n3n4Sub);
    printf("%f / %f = %f\n",number3, number4, n3n4Div);
    printf("%f * %f = %f\n",number3, number4, n3n4Mul);
}
