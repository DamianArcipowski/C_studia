#include <stdio.h>

char* strcat(char* t, const char* s) {
    size_t i = 0;
    size_t j = 0;

    while (t[i] != '\0') {
        i++;
    }

    while (s[j] != '\0') {
        t[i] = s[j];
        i++;
        j++;
    }

    t[i] = '\0';

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