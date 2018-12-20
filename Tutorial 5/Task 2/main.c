#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer;

    printf("Give me a number");
    scanf("%d", &answer);

    //For loops
    printf("For Loop\n");
    for (int i = 0; i <= answer; i++){
        printf("%d\n", i);
    }

    printf("While Loop\n");
    int number = 0;
    while (number <= answer){
        printf("%d\n", number);
        number++;
    }

    printf("Do Loop\n");
    int doNumber = 0;

    do{
        printf("%d\n", doNumber);
        doNumber++;
    }
    while(doNumber <= answer);

    return 0;
}
