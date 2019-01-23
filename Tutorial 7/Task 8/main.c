#include <stdio.h>
#include <stdlib.h>

float circle();

int main()
{
    int answer;
    printf("Circle Radius:\n");
    scanf("%d", &answer);

    float area = circle(answer);
    printf("%f", area);
    return 0;
}

float circle(int radius){
    return 3.14159265359*(radius*radius);
}
