#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numbers[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};

    for (int i = 0; i<=9; i++){
        printf("%d\n", numbers[i]);
    }

    printf("\n");

    for (int i = 9; i>=0; i--){
        printf("%d\n", numbers[i]);
    }

   printf("\n");

    for (int i = 0; i<=9; i+=3){
        printf("%d\n", numbers[i]);
    }

    printf("\n");

    for (int i = 9; i>=0; i-=3){
        printf("%d\n", numbers[i]);
    }
    return 0;
}
