#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char inputStr[100];
    char newStr[400];
    int counter = 0;

    printf("Wprowadz zdanie: \n");
    fgets(inputStr, 100, stdin);

    for (int i = 0; i < (int) strlen(inputStr); i++) {
        if (inputStr[i] == 9) {

            for (int j = 0; j < 4; j++) {
                newStr[counter] = ' ';
                counter++;
            }

        } else {
            newStr[counter] = inputStr[i];
            counter++;
        }
    }

    printf("Nowe zdanie to: %s", newStr);

    return 0;
}