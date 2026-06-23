#include <stdio.h>

int main() {
    char stringArray[2][25] = {
        "Hello World",
        "String2"
    };

    int countWithPointer = 0;
    char *arrayPointer = stringArray[0];
    int arraySize = sizeof(stringArray);

    for (int i = 0; i < arraySize; ++i) {
        if (*(arrayPointer + i) == '\0') {
            continue;
        }
        countWithPointer++;
    }

    int n = 0;
    int k = 0;
    int c = 0;
    int  rowsNumber = sizeof(stringArray) / sizeof(stringArray[0]);
    while (n < rowsNumber) {
        while (stringArray[n][c] != '\0') {
            k++;
            c++;
        }
        c = 0;
        n++;
    }

    printf("n: %i k: %i\n", n, k);
    printf("count with pointers: %i\n", countWithPointer);
}