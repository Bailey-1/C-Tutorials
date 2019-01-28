#include <stdio.h>

void chararray(char array[]);

int main() {
    char array[] = "This is a sentence";
    chararray(array);
    return 0;
}

void chararray(char array[]){
    printf("%s", array);
}