#include <stdio.h>

int main()
{
    int answer1, answer2;

    printf("Input the value of answer1: ");
    scanf("%d", &answer1);

    printf("Input the value of answer2: ");
    scanf("%d",&answer2);

    if (answer1 > answer2)
    {
        printf("answer1 is bigger");
    }
    else if (answer1 < answer2)
    {
        printf("answer2 is bigger");
    }
    else
    {
        printf("They are equal");
    }
    return 0;
}