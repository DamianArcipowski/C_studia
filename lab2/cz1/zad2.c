#include <stdio.h>

double minimum(double x, double y, double z) {
    double min = x;

    if (y < x) {
        min = x;
    } else if (z < x) {
        min = z;
    }

    return min;
}

double average(double x, double y, double z) {
    return (x + y + z) / 3;
}

double power(double x, int n) {
    if (n == 0) return 1;

    double result = x;

    for (int i = 0; i < n - 1; i++) {
        result *= x;
    }

    return result;
}

int main() {
    double x, y, z, n;

    printf("Podaj x: \n");
    scanf("%lf", &x);

    printf("Podaj y: \n");
    scanf("%lf", &y);

    printf("Podaj z: \n");
    scanf("%lf", &z);

    printf("Minimum: %lf\n", minimum(x, y, z));
    printf("Srednia: %lf\n", average(x, y, z));

    printf("Podaj x: \n");
    scanf("%lf", &x);

    printf("Podaj n: \n");
    scanf("%lf", &n);

    printf("x^n: %lf", power(x, n));

    return 0;
}