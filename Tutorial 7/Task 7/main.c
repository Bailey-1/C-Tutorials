#include <stdio.h>
#include <stdlib.h>

int ask();

int main()
{
    printf("Question 1:\n");
    int answerbool = ask();

    printf("Question 2:\n");
    answerbool = ask();

    printf("Question 3:\n");
    answerbool = ask();


    printf("%d", answerbool);

    return 0;
}

int ask(){
    char useranswer;
    printf("\nAnswer: ");
    scanf("%c", &useranswer);

    switch(useranswer[0]){
    case 'y' :
        return 1;
        break;
    case 'n' :
        return 0;
        break;
    default :
        ask();
        break;
    }
}
