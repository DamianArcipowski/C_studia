#include <stdio.h>

char* strcpy(char* t, const char* s) {
    char* start = t;
    
    while ((*t++ = *s++))
        ;

    return start;
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
    strcpy(target, source);
    printf("Skopiowany tekst: %s", target);

    return 0;
}