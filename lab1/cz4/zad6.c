#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp, current, previous;
    scanf("%d", &amount);

    int counter = 0;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (i > 1) {
            previous = current;
        }
        current = temp;

        if (i > 1 && previous > 0 && current > 0) {
            counter++;
        }
    }

    printf("Ilosc par (a, b) gdzie a > 0 i b > 0: %d\n", counter);

    return 0;
}