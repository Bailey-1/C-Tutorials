#include <stdio.h>

int main() {
    int number1, number2, number3;

    printf("Enter Number 1: ");
    scanf("%d", &number1);

    printf("Enter Number 2: ");
    scanf("%d", &number2);

    printf("Enter Number 3: ");
    scanf("%d", &number3);

    /*Used Brackets to make the addition first*/

    int answer = (number1 + number2) * number3;

    printf("Answer: %d", answer);
    return 0;
}