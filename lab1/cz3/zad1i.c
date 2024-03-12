#include <stdio.h>

int factorical(int num) {
    if (num < 2) {
        return 1;
    }

    return num * factorical(num - 1);
}

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount;
    float temp;
    scanf("%d", &amount);

    float result = 0;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz wyraz a%d: \n", i);
        scanf("%f", &temp);

        if (i % 2 == 0) {
            result += (temp / factorical(i));
        } else {
            result -= (temp / factorical(i));
        }
    }

    printf("%.2f", result);

    return 0;
}