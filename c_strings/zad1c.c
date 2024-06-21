#include <stdio.h>

char* strncpy(char* t, const char* s, size_t n) {
    size_t i;

    for (i = 0; i < n && s[i] != '\0'; i++) {
        t[i] = s[i];
    }

    for (; i < n; i++) {
        t[i] = '\0';
    }

    return t;
}

size_t strlen(const char *s) {
    size_t len = 0;

    while(*s++) {
        ++len;
    }

    return len;
}

int main() {
    const char* source = "Na przedmieściach żył Singapuru pewien słynny z przemówień guru. \n\
Lecz raz wyznał mi z płaczem: 'Mam kłopoty z wołaczem i do szczura wciąż mówię: szczuru!'\n";

    int source_size = (strlen(source) + 1) * sizeof(char);
    char target[source_size];
    strncpy(target, source, source_size);
    printf("Skopiowany tekst: %s", target);

    return 0;
}