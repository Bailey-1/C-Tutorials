#include <stdio.h>

float add(int a, int b, float array[][4]);

int main() {
    float array[][4] = {
            {1.1, 2.2, 3.3, 2.4},
            {1.5, 2.3, 4.2, 4.2},
            {1.4, 2.4, 2.1, 4.3}
    };

    int a = sizeof(array) / sizeof(float) / 4;
    float answer = add(a, 4, array);

    printf("%.1f", answer);

    return 0;
}

float add(int a, int b, float array[][4]){
    float sum = 0;
    for(int x=0; x<a; x++){
        for(int y=0; y<b; y++){
            sum = sum + array[x][y];
        }
    }
    return sum;
}