#include <stdio.h>

int main() {
    printf("Wprowadz wyraz a1: \n");
    int a1;
    scanf("%d", &a1);

    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    for (int i = 2; i < amount + 2; i++) {
        printf("Wprowadz wyraz a%d: \n", i);
        scanf("%d", &temp);
        a1 += temp;
    }

    printf("%d", a1);

    return 0;
}