#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int evensWithOddNumber = 0;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (i % 2 == 1 && temp % 2 == 0) {
            evensWithOddNumber++;
        }
    }

    printf("Nieparzysty numer i parzyste: %d\n", evensWithOddNumber);

    return 0;
}