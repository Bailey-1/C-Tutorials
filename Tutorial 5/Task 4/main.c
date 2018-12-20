#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character;
    int x;
    int y;

    printf("Please enter a character: ");
    scanf("%s", &character);
    printf("Please enter a X: ");
    scanf("%d", &x);
    printf("Please enter a Y: ");
    scanf("%d", &y);

    for (int i=0; i<y; i++){
        for(int j=0; j<x; j++){
            printf("%c", character);
        }
        printf("\n");
    }

    return 0;
}
