#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    int numbers[10];
    int num;
    for (int i=0; i<=9; i++){
        num = i + 1;
        printf("Please enter number %d:", num);
        scanf("%d", &numbers[i]);
    }
    printf("");
    return 0;
    */

    int numbers[] = {1,2,3,4,5,6,7,8,9,10};
    int usernum;

    printf("Enter your number");
    scanf("%d", &usernum);

    for (int i=0;i<=9;i++){
        printf("%d\n", numbers[i]);
    }

    int tempnum;

    for (int i=0;i<=9;i++){
        if (usernum == numbers[i]){
            tempnum = i + 1;
            printf("The number was found at number %d in the array\n", tempnum);
        }
    }
}
