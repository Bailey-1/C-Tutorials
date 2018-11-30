#include <stdio.h>
#include <stdlib.h>

int main() {
    int intNumber;
    float floatNumber;

    printf("Integer Number: ");
    scanf("%d", &intNumber);

    printf("Float Number: ");
    scanf("%f", &floatNumber);

    printf("The Integer Number is %d.\n", intNumber);
    printf("The Float Number is %f. \n", floatNumber);


    /*
     * Compound Assignment Operator
     */
    intNumber+= 1; //Increments intNumber by one
    floatNumber+= 1; //Increments intNumber by one

    printf("The Integer Number is %d.\n", intNumber);
    printf("The Float Number is %f. \n", floatNumber);

    /*
     * Prefix Increment Operator
     */
    ++intNumber; //Increments intNumber by one
    ++floatNumber; //Increments intNumber by one

    printf("The Integer Number is %d.\n", intNumber);
    printf("The Float Number is %f. \n", floatNumber);

    /*
     * Postfix Increment Operator
     */
    intNumber++; //Increments intNumber by one
    floatNumber++; //Increments intNumber by one

    printf("The Integer Number is %d.\n", intNumber);
    printf("The Float Number is %f. \n", floatNumber);

    return 0;
}