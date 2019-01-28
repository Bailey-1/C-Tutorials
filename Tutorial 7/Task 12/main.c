#include <stdio.h>
#include <stdlib.h>

int main()
{
    int boolmenu = 1;
    while(boolmenu == 1){
        boolmenu = menu();
    }
    printf("Boolmenu: %d", boolmenu);
    return 0;
}

int menu(){
    int true = 1;
    while (true){
        int answer;
        printf("\n[1] New Game");
        printf("\n[2] Load Game");
        printf("\n[3] Options");
        printf("\n[4] Quit\n");

        scanf("%d", &answer);
        switch (answer){
            case 1 :
                newgame();
                break;
            case 2 :
                loadgame();
                break;
            case 3 :
                options();
                break;
            case 4 :
                printf("Quit");
                true = 0;
                break;
        }
    }
    return 0;
}

void newgame(){
    printf("New Game\n");
}

void loadgame(){
    printf("Load Game\n");
}

void options(){
    int optiontrue = 1;
    while (optiontrue){
        printf("Options");
        printf("\n[1] Video");
        printf("\n[2] Sound");
        printf("\n[3] Gameplay");
        printf("\n[4] Back\n");
        int answer;
        scanf("%d", &answer);
        switch (answer){
            case 1 :
                video();
                break;
            case 2 :
                sound();
                break;
            case 3 :
                gameplay();
                break;
            case 4 :
                back();
                optiontrue = 0;
        }
    }
}

void video(){
    printf("\nVideo\n");
}

void sound(){
    printf("\nSound\n");
}

void gameplay(){
    printf("\nGameplay\n");
}

void back(){
    printf("\nBack\n");
}
