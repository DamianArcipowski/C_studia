#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int result = 1;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz wyraz a%d: \n", i);
        scanf("%d", &temp);
        
        if (temp < 0) {
            result *= (temp * -1);
        } else {
            result *= temp;
        }
    }

    printf("%d", result);

    return 0;
}