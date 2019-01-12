#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    //float temps[];
    float temp[365];
    int daynum;

    for (int i = 0; i <366; i++){
        float x = (float)rand()/(float)(RAND_MAX/70);
        //int x = (rand() % 71 - 20);
        temp[i] = x;
        daynum = i;
        printf("Day %d: ", daynum);
        printf("%f\n", temp[i]);
    }

    int day;

    printf("Enter the date you want to find the temp for: ");
    scanf("%d", &day);

    printf("%f", temp[day-1]);

    return 0;
}
