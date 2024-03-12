#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp, min, max;
    scanf("%d", &amount);

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (i == 1) {
            min = temp;
            max = temp;
        }

        if (temp < min) {
            min = temp;
        }

        if (temp > max) {
            max = temp;
        }
    }

    printf("Najmniejsza: %d\n", min);
    printf("Najwieksza: %d\n", max);

    return 0;
}