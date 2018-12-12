#include <stdio.h>
#include <stdlib.h>

int main()
{
    int score;

    printf("Please enter score: ");
    scanf("%d", &score);

    if (score <= 39 ){
        printf("Grade: Fail");
    }
    else if (score <= 49){
        printf("Grade: 3rd");
    }
    else if (score <= 59){
        printf("Grade: 2:2");
    }
    else if (score <= 69){
        printf("Grade: 2:1");
    }
    else if (score <= 100){
        printf("Grade: 1st");
    }
    else {
        printf("Invalid Mark Entered");
    }

    return 0;
}
