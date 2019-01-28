#include <stdio.h>
#include <stdlib.h>

int GenerateLotteryNumbers(int array[]);
int DisplayLotteryNumbers(int array[]);

int main() {
    int numArray[6];
    GenerateLotteryNumbers(numArray);
    DisplayLotteryNumbers(numArray);

    return 0;
}

int GenerateLotteryNumbers(int array[]){
    srand(time(NULL));
    for(int i=0; i<=5; i++){
        array[i] = (rand() % S49 )+ 1;
        printf("%d\n", array[i]);
    }
}

int DisplayLotteryNumbers(int array[]){
    for(int i=0; i<=5; i++){
        printf("%d\n", array[i]);
    }
}