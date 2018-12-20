#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numbers[] = {1000.0, 2.0, 3.4, 7.0, 50.0, 1000.0, 2.0, 3.4, 7.0, 50.0};
    int answer;

    printf("Which element location do u want?: ");
    scanf("%d", &answer);

    printf("%d", numbers[answer]);


    return 0;
}
