#include <stdio.h>
#include <stdlib.h>

int test_number = 100;

int main()
{
    int test_number = 200;

    printf("test_number: %d", test_number);

    //it shows 200 cause it is more local than the 100 one so it is more important and is what it does it do be like that.


    return 0;
}
