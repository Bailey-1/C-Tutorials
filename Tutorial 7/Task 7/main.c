#include <stdio.h>
#include <stdlib.h>

int Ask();

int main()
{
    int score = 0;

    printf("Question 1: \n");
    int answerbool = Ask(); //Ask user for yes or no.
    if (answerbool == 1){ //If user answer is equal to the right answer. This is so that not questions have the right answer as 1.
        printf("Well Done\n");
        score += 1; //Increment the score.
    } else {
        printf("Uh Oh!\n");
    }

    printf("Question 2: \n");
    answerbool = Ask();
    if (answerbool == 0){
        printf("Well Done\n");
        score += 1;
    } else {
        printf("Uh Oh!\n");
    }

    printf("Question 3: \n");
    answerbool = Ask();
    if (answerbool == 1){
        printf("Well Done\n");
        score += 1;
    } else {
        printf("Uh Oh!\n");
    }

    printf("Score: %d", score);

    return 0;
}

int Ask() {
    int true = 1;
    char answer;
    while (true) {
        printf("Answer:\n");
        scanf(" %c", &answer);
        switch (answer) {
            case 'y' :
                return 1;
            case 'n' :
                return 0;
            default:
                printf("Try Again\n");
        }
    }
}