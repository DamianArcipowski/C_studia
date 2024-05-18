#include <stdio.h>

int *twoInts(int *a, int *b) {
    return (*a < *b) ? a : b;
}

int main() {
    int a = 3;
    int b = 2;

    printf("Adres a: %p, Adres b: %p\n", &a, &b);

    int *result = twoInts(&a, &b);

    printf("Mniejsza z liczb jest pod adresem: %p\n", result);

    return 0;
}