#include <stdio.h>
#include <stdlib.h>

void halfdouble(float *a, float *b, float *c);

int main()
{
    float a=2.4;
    float b, c;
    halfdouble(&a, &b, &c);
    printf("%f\n", a);
    printf("%f\n", b);
    printf("%f\n", c);

    return 0;
}

void halfdouble(float *a, float *b, float *c){
    *b = *a / 2;
    *c = *a * 2;
}
