#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char inputStr[100];
    char newStr[100];

    printf("Wprowadz zdanie: \n");
    fgets(inputStr, 100, stdin);

    for (int i = 0; i < (int) strlen(inputStr); i++) {
        if (islower(inputStr[i])) newStr[i] = toupper(inputStr[i]);
        else if (isupper(inputStr[i])) newStr[i] = tolower(inputStr[i]);
        else newStr[i] = inputStr[i];
    }

    printf("Nowe zdanie to: %s", newStr);

    return 0;
}