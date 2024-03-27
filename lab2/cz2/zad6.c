#include <stdio.h>
#include <math.h>

int main() {
    int n;

    printf("Wprowadz liczbe n: \n");
    scanf("%d", &n);

    for (int i = 0; i <= sqrt(n); i++) {
        for (int j = 0; j <= sqrt(n); j++) {
            for (int k = 0; k <= sqrt(n); k++) {
                for (int l = 0; l <= sqrt(n); l++) {
                    int squaresSum = pow(i, 2) + pow(j, 2) + pow(k, 2) + pow(l, 2);
                    if (squaresSum == n) {
                        printf("Liczby spelniajace a^2 + b^2 + c^2 + d^2 = n to: %d %d %d %d \n", i, j, k, l);
                        i = j = k = l = sqrt(n);
                    }
                }
            }
        }
    }

    return 0;
}