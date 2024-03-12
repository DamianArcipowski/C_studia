#include <stdio.h>
#include <math.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount;
    float temp;
    scanf("%d", &amount);

    float result = 0;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz wyraz a%d: \n", i);
        scanf("%f", &temp);
        
        if (temp < 0) {
            result += sqrt((temp * -1));
        } else {
            result += sqrt(temp);
        }
    }

    printf("%.2f", result);

    return 0;
}