#include <stdio.h>
#include <math.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount;
    float temp;
    scanf("%d", &amount);

    int evenSquares = 0;
    
    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%f", &temp);

        if (!fmod(sqrt(temp), 2)) {
            evenSquares++;
        }
    }

    printf("Kwadraty liczby parzystej: %d\n", evenSquares);

    return 0;
}