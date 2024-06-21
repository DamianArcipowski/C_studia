#include <stdio.h>

char* strcat(char* t, const char* s) {
    char* dest = t;

    while (*t != '\0') {
        t++;
    }

    while ((*t = *s) != '\0') {
        t++;
        s++;
    }

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
    const char* source_a = "Na przedmieściach żył Singapuru pewien słynny z przemówień guru. \n";
    const char* source_b = "Lecz raz wyznał mi z płaczem: 'Mam kłopoty z wołaczem i do szczura wciąż mówię: szczuru!'\n";

    int a_size = (strlen(source_a) + 1) * sizeof(char);
    int b_size = (strlen(source_a) + 1) * sizeof(char);
    char target[a_size + b_size];
    strcat(target, source_a);
    strcat(target, source_b);
    printf("Tekst po dopisaniu: %s", target);

    return 0;
}