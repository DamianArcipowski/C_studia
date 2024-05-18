#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int divisible = 0;
    
    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (temp % 3 == 0 && temp % 5 != 0) {
            divisible++;
        }
    }

    printf("Podzielne przez 3 i niepodzielne przez 5: %d\n", divisible);

    return 0;
}