#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char inputStr[100];
    int small = 0;
    int capital = 0;
    int digit = 0;

    printf("Wprowadz zdanie: \n");
    fgets(inputStr, 100, stdin);

    for (int i = 0; i < (int) strlen(inputStr); i++) {
        if (islower(inputStr[i])) small++;
        else if (isupper(inputStr[i])) capital++;
        else if (isdigit(inputStr[i])) digit++;
    }

    printf("Male litery: %d\n Duze litery: %d \n Cyfry: %d", small, capital, digit);

    return 0;
}