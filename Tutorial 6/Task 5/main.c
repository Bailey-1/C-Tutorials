#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("Input scores:");
    int scores[20];
    //int scores[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};

    for (int i=0; i<20; i++){
        printf("Array: %d\n", i);
        scanf("%d", &scores[i]);
    }


    int highscore = scores[0];
    int lowscore = scores[0];
    float averagescore;
    int total = 0;

    for (int i=0; i<20; i++){
        int number = scores[i];
        if (number > highscore){
            highscore = number;
        }

        if (number < lowscore){
            lowscore = number;
        }
        total = total + scores[i];
    }

    averagescore = total / 20;

    printf("\nHigh Score: %d", highscore);
    printf("\nLow Score: %d", lowscore);
    printf("\nAverage: %f", averagescore);

    return 0;
}
