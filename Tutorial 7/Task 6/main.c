#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2;
    number1 = asknumber();
    number2 = asknumber();

    int number3 = number1 + number2;
    printf("%d+%d=%d", number1, number2, number3);
    return 0;
}

int asknumber()
{
    printf("Please enter a number: ");
    int answer;
    scanf("%d", &answer);
    return answer;
}
