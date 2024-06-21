#include <stdio.h>

char* strncat(char* t, const char* s, size_t n) {
    char* dest = t;

    while (*t != '\0') {
        t++;
    }

    while (n > 0 && *s != '\0') {
        *t = *s;
        t++;
        s++;
        n--;
    }

    *t = '\0';

    return dest;
}

size_t strlen(const char *s) {
    size_t len = 0;

    while(*s++) {
        ++len;
    }

    return len;
}

int main() {
    char source[200] = "Na przedmieściach żył Singapuru pewien słynny z przemówień guru. \n";
    const char* target = "Lecz raz wyznał mi z płaczem: 'Mam kłopoty z wołaczem i do szczura wciąż mówię: szczuru!'\n";

    int a_size = (strlen(source) + 1) * sizeof(char);
    int b_size = (strlen(target) + 1) * sizeof(char);
    strncat(source, target, a_size + b_size);
    printf("Złączone teksty: %s", source);

    return 0;
}