#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char inputFile[500];
    char codesStr[1000];
    char singleChar;
    int i = 0;
    
    FILE *freader, *fwriter;

    freader = fopen("tekst.txt", "r");
    fwriter = fopen("kody.txt", "w");

    do {
        singleChar = fgetc(freader);
        fprintf(fwriter, "%d", (int) singleChar);
        fputc(' ', fwriter);
        i++;
    } while (singleChar != EOF);

    fclose(freader);
    fclose(fwriter);

    return 0;
}