#include <stdio.h>
#include <stdlib.h>

int main()
{
    int table[24][24];
    int i, j, num1, num2;

    for(i=0; i<24;i++){
        for(j=0;j<24;j++){
            table[i][j] = ((i+1) * (j+1));
            printf("%03d ", table[i][j]);
        }
        printf("\n");
    }

    printf("\nEnter two numbers to multiply: \n");
    scanf("%d", &num1);
    scanf("%d", &num2);
    printf("\nThe answer is: %d", table[(num1-1)][num2-1]);

    return 0;
}
