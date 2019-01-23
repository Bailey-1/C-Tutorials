#include <stdio.h>
#include <stdlib.h>

void stars();

int main()
{
    stars(5);

    printf("How many stars do you want?");
    int answer;
    scanf("%d", &answer);
    stars(answer);

    return 0;
}

void stars(int number)
{
    for(int i=0; i<number; i++){
        printf("*");
    }
    printf("\n");

}
