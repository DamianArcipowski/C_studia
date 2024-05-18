#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int matchesCondition = 0;
    
    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (abs(temp) < pow(temp, 2)) {
            matchesCondition++;
        }
    }

    printf("Liczby ktore spelniaja warunek |ak| < k^2: %d\n", matchesCondition);

    return 0;
}