#include <stdio.h>
#include <stdlib.h>

void increase(int *number);

int main()
{
    int number = 10;
    increase(&number);
    printf("%d", number);
    return 0;
}

void increase(int *number){
    *number += 5;
}
