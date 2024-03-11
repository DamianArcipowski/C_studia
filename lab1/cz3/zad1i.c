#include <stdio.h>
#include <math.h>

int factorical(int num) {
    if (num < 2) {
        return 1;
    }

    return num * factorical(num - 1);
}

int main() {
    printf("Wprowadz wyraz a1: \n");
    float a1;
    scanf("%f", &a1);

    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount;
    float temp;
    scanf("%d", &amount);

    a1 = -a1 / 1;

    for (int i = 2; i < amount + 2; i++) {
        printf("Wprowadz wyraz a%d: \n", i);
        scanf("%f", &temp);

        if (i % 2 == 0) {
            a1 += (temp / factorical(i));
        } else {
            a1 -= (temp / factorical(i));
        }
    }

    printf("%.2f", a1);

    return 0;
}