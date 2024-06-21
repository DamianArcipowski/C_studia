#include <stdio.h>

int strindex(const char* s, const char* t) {
    int i, j, k;

    for (i = 0; s[i] != '\0'; i++) {
        for (j = i, k = 0; t[k] != '\0' && s[j] == t[k]; j++, k++)
            ;

        if (t[k] == '\0') {
            return i;
        }
    }

    return -1;
}

int main() {
    const char* source = "Mistrz programowania";
    const char* substr = "pro";

    int index = strindex(source, substr);

    if (index != -1) {
        printf("Podciąg '%s' znaleziony w ciągu '%s' pod indeksem %d\n", substr, source, index);
    } else {
        printf("Podciąg '%s' nie znaleziony w ciągu '%s'\n", substr, source);
    }

    return 0;
}