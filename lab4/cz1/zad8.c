#include <stdio.h>

void rewriteValue(int n, int *w) {
    *w = n;
}

int main() {
    int num = 5;
    int empty;

    printf("Przed przepisaniem: \nnum: %d, empty: %d\n", num, empty);

    rewriteValue(num, &empty);

    printf("Po przepisaniu: \nnum: %d, empty: %d\n", num, empty);

    return 0;
}