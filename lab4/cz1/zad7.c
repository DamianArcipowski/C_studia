#include <stdio.h>

int twoInts(const int *a, const int *b) {
    return *a + *b;
}

int main() {
    const int a = 7;
    const int b = 4;

    printf("Suma stalych: %d\n", twoInts(&a, &b));

    return 0;
}