#include <stdio.h>
#include <stdlib.h>

int main()
{
    int true = 1;
    while(true){
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

        if (day == 1 || day == 3 ||day ==5 || day == 6 ||day ==  8){
            printf("Weekday\n");
        }
        else if (day == 2 || day == 7){
            printf("Weekend\n");
        }
        else{
            printf("Invalid Answer\n");
        }
        printf("==========\n");
    }

    return 0;
}
