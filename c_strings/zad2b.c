#include <stdio.h>

size_t strlen(const char* s) {
    const char* start = s; 

    while (*s) {
        s++;
    }

    return s - start;
}

int main() {
    const char* source = "Na przedmieściach żył Singapuru pewien słynny z przemówień guru. \n\
Lecz raz wyznał mi z płaczem: 'Mam kłopoty z wołaczem i do szczura wciąż mówię: szczuru!'\n";

    size_t len = strlen(source);
    printf("Długość tekstu wynosi %zu znaków\n", len);

    return 0;
}