#include <stdio.h>
#include <math.h>

int main() {
    printf("Wprowadz wyraz a1: \n");
    int a1;
    scanf("%d", &a1);

    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    if (a1 < 0) {
        a1 *= -1;
    }

    a1 = sqrt(a1);

    for (int i = 2; i < amount + 2; i++) {
        printf("Wprowadz wyraz a%d: \n", i);
        scanf("%d", &temp);
        
        if (temp < 0) {
            a1 += sqrt((temp * -1));
        } else {
            a1 += sqrt(temp);
        }
    }

    printf("%d", a1);

    return 0;
}