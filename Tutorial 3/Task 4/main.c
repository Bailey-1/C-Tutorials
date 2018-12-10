#include <stdio.h>

int main() {
    int i = 16;
    int j = 32;
    int k = 8;

    //1
    printf("r = (i == 16)\n");
    if (i == 16){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //2
    printf("\nr = (k != 16)\n");
    if (k != 16){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //3
    printf("\nr = (k < 10)\n");
    if (k < 10){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //4
    printf("\nr = (j > 33)\n");
    if (j > 33){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //5
    printf("\nr = (j == (k * 2))\n");
    if (j == (k * 2)){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //6
    printf("\nr = (j == (i * 2))\n");
    if (j == (i * 2)){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //7
    printf("\nr = ((k + i) <= (j - i))\n");
    if ((k + i) <= (j - i)){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //8
    printf("\nr = ((i / k) == 2)\n");
    if ((i / k) == 2){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    //9
    printf("\nr = ((( i + j + k ) / k ) >= 7 )\n");
    if ((( i + j + k ) / k ) >= 7 ){
        printf("r is true\n");
    }
    else {
        printf("r is false\n");
    }

    return 0;
}