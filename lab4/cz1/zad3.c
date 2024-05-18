#include <stdio.h>

int twoInts(int *a, int *b) {
    return (*a < *b) ? *a : *b;
}

int main() {
    int a = 1;
    int b = 2;

    printf("Mniejsza z liczb: %d\n", twoInts(&a, &b));

    return 0;
}