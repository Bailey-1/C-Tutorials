#include <stdio.h>
#include <stdlib.h>

int number();

int main()
{
    int answer = number(7,2);
    printf("%d", answer);
    return 0;
}

int number(int a, int b){
    if (a%b == 0){
        return 1;
    }
    else{
        return 0;
    }
}

