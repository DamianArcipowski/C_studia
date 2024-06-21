#include <stdio.h>

size_t strlen(const char* s) {
    size_t len = 0;

    while (s[len] != '\0') {
        len++;
    }

    return len;
}

int main() {
    const char* source = "Na przedmieściach żył Singapuru pewien słynny z przemówień guru. \n\
Lecz raz wyznał mi z płaczem: 'Mam kłopoty z wołaczem i do szczura wciąż mówię: szczuru!'\n";

    size_t length = strlen(source);
    printf("Długość tekstu wynosi %zu znaków\n", length);
    
    return 0;
}