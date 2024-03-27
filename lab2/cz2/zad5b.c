#include <stdio.h>

int main() {
    int n;

    printf("Wprowadz liczbe: \n");
    scanf("%d", &n);

    int sumOfFactors = 0;
    int perfectNumbers = 0;

    for (int i = 1; i < n; i++) {
        for (int j = 1; j < i; j++) {
            if (i % j == 0) sumOfFactors += j;
        }

        if (sumOfFactors == i) perfectNumbers++;
        sumOfFactors = 0;
    }

    printf("Ilosc liczb doskonalych mniejszych od %d: %d", n, perfectNumbers);

    return 0;
}