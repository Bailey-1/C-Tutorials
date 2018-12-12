#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer, secondAnswer;
    int true = 1;

    while(true){
        printf("What month is it?");
        printf("\n1: July");
        printf("\n2: December");
        printf("\n3: Other\n");
        scanf("%d", &answer);

        switch(answer){
            case 1 :
                printf("Is there a sandstorm?\n");
                printf("1: Yes\n");
                printf("2: No\n");

                scanf("%d", &secondAnswer);

                if (secondAnswer == 1){
                    printf("You Will Stay in the Hotel and Go For a Swim");
                }
                else {
                    printf("You will go for a camel ride and then visit the pyramids");
                }

                break;
            case 2 :
                printf("Is there snow?\n");
                printf("1: Yes\n");
                printf("2: No\n");

                scanf("%d", &secondAnswer);

                if (secondAnswer == 1){
                    printf("You will go skiing");
                }
                else {
                    printf("You will eat fondue");
                }

                break;
            case 3 :
                printf("You will go to work :(");
                break;
            default :
                printf("ERROR");
        }
        printf("\n===========\n");
    }

    return 0;
}
