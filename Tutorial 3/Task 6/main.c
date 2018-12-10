#include <stdio.h>

int main() {
    /* I think that the program will compile and run correctly but nothing will be
     * displayed to the console.
     * */
    int x = 5;
    int y = 7;

    if(x = y)
    {
        printf("x and y are equal\n");
    }

    /* After running the program:
     * The program does compile correctly and run but it will always print
     * to the screen that "x and y are equal". This is because in the if statement
     * (L10), the X variable is set to the value of the Y variable. This means
     * that it will always be true because the value is changed before the two are compared.
     * */
}