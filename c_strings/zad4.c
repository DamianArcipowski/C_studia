#include <stdbool.h>
#include <stdio.h>

bool strend(const char* s, const char* t) {
    const char *s_orig = s;
    const char *t_orig = t;

    while (*s != '\0') {
        s++;
    }

    while (*t != '\0') {
        t++;
    }

    if ((t - t_orig) > (s - s_orig)) {
        return false;
    }

    while (t_orig <= t) {
        if (*s != *t) {
            return false;
        }
        s--;
        t--;
    }

    return true;
}

int main() {
    const char* whole_string = "Mistrz programowania\n";
    const char* part_a = "Mistrz";
    const char* part_b = "programowania\n";

    if (strend(whole_string, part_a)) {
        printf("%skończy się słowem: %s\n", whole_string, part_a);
    } else {
        printf("%snie kończy się słowem: %s\n", whole_string, part_a);
    }

    printf("--------------------------\n");

    if (strend(whole_string, part_b)) {
        printf("%skończy się słowem: %s", whole_string, part_b);
    } else {
        printf("%snie kończy się słowem: %s", whole_string, part_b);
    }

    return 0;
}