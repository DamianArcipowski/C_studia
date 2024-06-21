#include <stdbool.h>
#include <stdio.h>

bool strend(const char* s, const char* t) {
    int s_len = 0;
    int t_len = 0;

    while (s[s_len] != '\0') {
        s_len++;
    }

    while (t[t_len] != '\0') {
        t_len++;
    }

    if (t_len > s_len) {
        return false;
    }

    for (int i = 0; i < t_len; i++) {
        if (s[s_len - t_len + i] != t[i]) {
            return false;
        }
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