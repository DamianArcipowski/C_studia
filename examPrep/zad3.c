#include <stdio.h>

void swapValues(int *a, int *b) {
    if (*b < *a) {
        int temp = *a;
        *a = *b;
        *b = temp; 
    }
}

int main() {
    int a = 5;
    int b = 3;

    printf("Wartosci przed zamianą: %d %d\n", a, b);
    swapValues(&a, &b);
    printf("Wartosci po zamianie: %d %d\n", a, b);

    return 0;
}