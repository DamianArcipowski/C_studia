#include <stdio.h>

void swapValues(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a = 8;
    int b = 6;

    printf("Przed zamianą: \nA: %d, B: %d\n", a, b);

    swapValues(&a, &b);

    printf("Po zamianie: \nA: %d, B: %d\n", a, b);

    return 0;
}