#include <stdio.h>
#include <stdlib.h>

int main()
{
    float radius;
    const float pi = 3.14159265359;

    printf("Enter Number: ");
    scanf("%f", &radius);

    float circumference = 2 * (pi * radius);
    float area = pi * (radius * radius);

    printf("Circumference: %f\nArea: %f", circumference, area);

    return 0;
}
