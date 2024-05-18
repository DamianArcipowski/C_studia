#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int num = 0;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (temp > 0) {
            num += temp;
        }
    }

    printf("%d", num * 2);

    return 0;
}