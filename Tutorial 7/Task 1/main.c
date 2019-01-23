#include <stdio.h>
#include <stdlib.h>

void name(); //Function Delaration

int main()
{
    for (int i=0; i<=10; i++){
        name();
    }

    printf("Some other text");


    return 0;
}

void name()
{
    printf("Bailey\n");
}
