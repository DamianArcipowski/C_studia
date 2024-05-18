#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int odds = 0;
    
    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (temp % 2 == 1) {
            odds++;
        }
    }

    printf("Nieparzyste: %d\n", odds);

    return 0;
}