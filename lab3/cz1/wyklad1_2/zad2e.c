#include <stdio.h>
#include <math.h>

int factorical(int num) {
    if (num < 2) {
        return 1;
    }

    return num * factorical(num - 1);
}

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int matchesCondition = 0;
    
    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (temp > pow(2, i) && temp < factorical(i)) {
            matchesCondition++;
        }
    }

    printf("Liczby ktore spelniaja warunek 2^k < ak < k! dla 1 <= k <= n: %d\n", matchesCondition);

    return 0;
}