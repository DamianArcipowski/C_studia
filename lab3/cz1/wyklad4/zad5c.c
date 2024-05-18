#include <stdio.h>

int main() {
    int n;

    printf("Wprowadz liczbe: \n");
    scanf("%d", &n);

    int isPrime = 1;

    for (int i = 2; i < n; i++) {
        for (int j = 1; j < i; j++) {
            if (j != 1 && i % j == 0) isPrime = 0;
        }

        if (isPrime && n % i == 0) printf("Liczba %d jest pierwsza i jest podzielnikiem %d\n", i, n);
        isPrime = 1;
    } 

    return 0;
}