#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char inputStr[100];
    char newStr[200];

    printf("Wprowadz zdanie: \n");
    fgets(inputStr, 100, stdin);

    for (int i = 0; i < (int) strlen(inputStr); i++) {
        newStr[i * 2] = inputStr[i];
        newStr[i * 2 + 1] = inputStr[i];
    }

    printf("Nowe zdanie to: %s", newStr);

    return 0;
}