#include <stdio.h>
#include <stdlib.h>

void square();

int main()
{
    int length, height;
    printf("Length: ");
    scanf("%d", &length);

    printf("Height: ");
    scanf("%d", &height);

    square(length, height);

    return 0;
}

void square(int a, int b)
{
    for(int x=0; x<b; x++){
        for(int y=0; y<a; y++){
            printf("* ");
        }
        printf("\n");
    }
}
