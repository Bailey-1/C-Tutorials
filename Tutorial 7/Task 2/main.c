#include <stdio.h>
#include <stdlib.h>

void launch();

int main()
{
    launch(10);

    return 0;
}

void launch(int time)
{
    for (int i=time;i>0;i--){
        printf("%d\n", i);
    }
    printf("LIFTOFF");
}
