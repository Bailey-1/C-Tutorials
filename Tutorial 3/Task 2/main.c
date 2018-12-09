#include <stdio.h>
#include <stdlib.h>

int main()
{
    int highScore = 500;

    int player1, player2;

    printf("Player 1: ");
    scanf("%d", &player1);

    printf("Player 2: ");
    scanf("%d", &player2);

    if (player1 > player2){
        printf("Player 1 has the high score");

        if (player1>highScore){
            printf("\nPlayer 1 has beat the high sc3ore!");
        }
    }
    if (player2 < player1){
        printf("Player 2 has the high score");
        if (player2>highScore){
            printf("\nPlayer 1 has beat the high score!");
        }
    }
    if (player2 == player1){
        printf("Equal Score!");
    }
    return 0;
}
