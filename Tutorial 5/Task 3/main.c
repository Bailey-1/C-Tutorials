#include <stdio.h>
#include <stdlib.h>

#include "time.h" // needed to use time functions
#include "stdlib.h" // needed to use rand function

int main(void)
{
    int true = 1;
    while (true){
        int playerGuess;

        srand(time(NULL)); // 'seeds' random number generator with current time
        int random_number = 1 + (rand() % 20); // generates random integer between 0 and 9;
        printf("%d\n\n", random_number);

        int gameOver = 0;

        while (gameOver != 1){
            printf("Please Guess a Number: ");
            scanf("%d", &playerGuess);

            if (playerGuess == random_number){
                printf("You're Winner\n");
                gameOver = 1;
            }
            else{
                printf("Try again\n");
            }
    }

    return 0;
}
