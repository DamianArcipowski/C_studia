#include <stdio.h>

void swapValues(int *a, int *b) {
    int temp = *a;
    if (*a > *b) {
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a = 2;
    int b = 10;

    printf("Przed zamianą: \nA: %d, B: %d\n", a, b);

    swapValues(&a, &b);

    printf("Po zamianie: \nA: %d, B: %d\n", a, b);

    return 0;
}