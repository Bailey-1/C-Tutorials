#include <stdio.h>
#include <stdbool.h>

void ReverseInt(int array[], int size);
void ReverseChar(char array[], int size);
void ReverseFloat(float array[], int size);
void ReverseBool(bool array[], int size);

int main() {
    int arrayInt[] = {1,2,3,4,5};
    size_t arrayIntLen = sizeof(arrayInt)/sizeof(int);
    int length = arrayIntLen;
    ReverseInt(arrayInt, length);

    for (int i=0; i<length; i++){
        printf("%d\n", arrayInt[i]);
    }

    printf("==========");

    char arrayChar[] = {"abcde"};
    arrayIntLen = sizeof(arrayChar)/sizeof(char);
    length = arrayIntLen;
    ReverseChar(arrayChar, length);

    for (int i=0; i<length; i++){
        printf("%c\n", arrayChar[i]);
    }

    printf("==========\n");

    float arrayFloat[] = {1.45, 2.292, 3, 4.5, 5.0};
    arrayIntLen = sizeof(arrayFloat)/sizeof(float);
    length = arrayIntLen;
    ReverseFloat(arrayFloat, length);

    for (int i=0; i<length; i++){
        printf("%.3f\n", arrayFloat[i]);
    }

    printf("==========\n");

    bool arrayBool[] = {true, false, false, true, true};
    arrayIntLen = sizeof(arrayBool)/sizeof(bool);
    length = arrayIntLen;
    ReverseBool(arrayBool, length);

    for (int i=0; i<length; i++){
        printf("%d\n", arrayBool[i]);
    }

    return 0;
}

void ReverseInt(int array[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void ReverseChar(char array[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        int temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void ReverseFloat(float array[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        float temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

void ReverseBool(bool array[], int size)
{
    for (int i = 0; i < size/2; i++)
    {
        bool temp = array[i];
        array[i] = array[size - 1 - i];
        array[size - 1 - i] = temp;
    }
}

