#include <stdio.h>

int main() {
    const int intNumber = 7;
    const float floatNumber = 3.1;

    enum color {red, green, blue, purple, yellow};

    enum color color1 = red;
    printf("color1: %d\n", color1);

    enum color color2 = yellow;
    printf("color2: %d\n", color2);

    enum color color3; //The variable "color3" is being used without being initialized.
    printf("color3: %d\n", color3);

    return 0;
}