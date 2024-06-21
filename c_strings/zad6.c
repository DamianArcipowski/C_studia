#include <stdio.h>

int strindex(const char* s, const char* t) {
    const char *s_ptr, *t_ptr, *s_start;
    int index = 0;

    for (s_start = s; *s_start != '\0'; s_start++, index++) {
        s_ptr = s_start;
        t_ptr = t;

        while (*t_ptr != '\0' && *s_ptr == *t_ptr) {
            s_ptr++;
            t_ptr++;
        }

        if (*t_ptr == '\0') {
            return index;
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