#include <stdio.h>

// All programs start in main()
int main()
{
	int numbers[] = {10,10,10,10,10,10};
    int total = 0;

	for (int i = 0; i < 5; i++) {
       printf("%d", numbers[i]);
       total += i;
    }

    float average= total / 6;
    printf("Average = %5.6f", average);
	return 0;
}
