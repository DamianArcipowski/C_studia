#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount;
    scanf("%d", &amount);

    int matchesCondition = 0;
    float numbers[amount];
    
    for (int i = 0; i < amount; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i + 1);
        scanf("%f", &numbers[i]);
    }

    for (int i = 1; i < amount - 1; i++) {
        if (numbers[i] < (numbers[i - 1] + numbers[i + 1]) / 2 ) {
            matchesCondition++;
        }
    }

    printf("Liczby ktore spelniaja warunek ak < ak-1 + ak+1 / 2 dla 1 < k < n: %d\n", matchesCondition);

    return 0;
}