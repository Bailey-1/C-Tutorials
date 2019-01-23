#include <stdio.h>
#include <stdlib.h>

//void square();

int main()
{
    int length, height;
    char character;

    printf("Character: ");
    scanf("%c", &character);

    printf("Length: ");
    scanf("%d", &length);

    printf("Height: ");
    scanf("%d", &height);

    square(length, height, character);

    return 0;
}

void square(int a, int b, char c)
{
    for(int x=0; x<b; x++){
        for(int y=0; y<a; y++){
            printf("%c ", c);
        }
        printf("\n");
    }
}
