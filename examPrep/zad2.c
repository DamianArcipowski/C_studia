#include <stdio.h>

int firstNum(int n) {
    if (n < 0) n *= -1;

    while (n > 10) {
        n /= 10;
    }

    return n;
}

int main() {
    printf("Pierwsza cyfra to: %d\n", firstNum(353525));

    return 0;
}