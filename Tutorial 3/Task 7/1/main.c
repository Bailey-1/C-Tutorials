#include <stdio.h>

int main() {
    int answer;
    printf("Please enter a number: ");
    scanf("%d", &answer);

    if (answer%2==0){
        printf("%d is Even", answer);
    }
    else {
        printf("%d is Odd", answer);
    }


    return 0;
}