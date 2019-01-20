#include <stdio.h>

int main() {
    char *week[] = {"Monday", "Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

    for (int i=0; i<=6; i++){
        printf("%s\n", week[i]);
    }


    return 0;
}