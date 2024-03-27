#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int exists = 0;

    printf("Wprowadz liczbe n: \n");
    scanf("%d", &n);

    for (int i = 0; i <= sqrt(n); i++) {
        for (int j = 0; j <= sqrt(n); j++) {
            for (int k = 0; k <= sqrt(n); k++) {
                int squaresSum = pow(i, 2) + pow(j, 2) + pow(k, 2);
                if (squaresSum == n) {
                    printf("Liczby spelniajace a^2 + b^2 + c^2 = n to: %d %d %d \n", i, j, k);
                    exists = 1;
                }
            }
        }
    }

    if (!exists) {
        printf("Nie istnieja liczby spelniajace warunek a^2 + b^2 + c^2 = %d", n);
    } 

    return 0;
}