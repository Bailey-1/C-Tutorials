#include <stdio.h>
#include <stdlib.h>

int main()
{
    int true = 1;

    while (true){
        int day;

        printf("1. Monday\n");
        printf("3. Tuesday\n");
        printf("5. Wednesday\n");
        printf("6. Thursday\n");
        printf("8. Friday\n");
        printf("2. Saturday\n");
        printf("7. Sunday\n");
        printf("Please Enter the Day:");
        scanf("%d", &day);

        switch(day){
        case 1:
            printf("Weekday");
            break;
        case 3:
            printf("Weekday");
            break;
        case 5:
            printf("Weekday");
            break;
        case 6:
            printf("Weekday");
            break;
        case 8:
            printf("Weekday");
            break;
        case 2:
            printf("Weekend");
            break;
        case 7:
            printf("Weekend");
            break;
        default :
            printf("Invalid Choice");
        }
        printf("===========\n");
    }

    return 0;
}
