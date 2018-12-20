#include <stdio.h>
#include <stdlib.h>

int main()
{
    int answer;

    printf("Please give me ur number: ");
    scanf("%d", &answer);

    for (int i=answer; i>0; i--){
        printf("%d\n", i);
    }
    printf("Fire!");
}
