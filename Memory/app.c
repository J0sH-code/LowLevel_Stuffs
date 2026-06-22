#include <stdio.h>

int main() {
    char stringArray[2][25] = {
        "Hello World",
        "String2"
    };

    int n = 0;
    int k = 0;
    int c = 0;
    char kk = stringArray[n][c];

        while (stringArray[n][c] != '\0') {
            printf("%i\n",stringArray[n][c]);
            while (stringArray[n][c] != '\0') {
                k++;
                c++;
            }
            c = 0;
            n++;
        }

    char string[6] = "Hello";
    char string2[8] = "Hello";
    printf("%i %i %i\n", string[1], string[5], string[8]);
    printf("%i %i %i\n", string2[1], string2[5], string2[8]);
    printf("%s\n", stringArray[0]);
    printf("n: %i k: %i\n", n, k);
}