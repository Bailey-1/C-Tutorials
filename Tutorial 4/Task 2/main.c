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

    if(player1> player2){
        printf("Player 1 beat Player2");
        (player1>highScore) ? printf("\nPlayer 1 has a new high score!") : printf("");
    }
    else if(player1 < player2){
        printf("Player 2 beat Player1");
        (player2>highScore) ? printf("\nPlayer 2 huckas a new high score!") : printf("");
    }
    else{
        printf("Tired Score");
    }

  printf("Equal Score!");
    }
    return 0;
}

