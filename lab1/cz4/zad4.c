#include <stdio.h>

int main() {
    printf("Wprowadz ilosc elementow do wczytania: \n");
    int amount, temp;
    scanf("%d", &amount);

    int zeros = 0;
    int negatives = 0;
    int positives = 0;

    for (int i = 1; i < amount + 1; i++) {
        printf("Wprowadz liczbe nr. %d: \n", i);
        scanf("%d", &temp);

        if (temp > 0) {
            positives++;
        } else if (temp == 0) {
            zeros++;
        } else {
            negatives++;
        }
    }

    printf("Dodatnie: %d\n", positives);
    printf("Zera: %d\n", zeros);
    printf("Ujemne: %d", negatives);

    return 0;
}