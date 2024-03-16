#include <stdio.h>

int sgn(double x) {
    int sign;

    if (x > 0) {
        sign = 1;
    } else if (x < 0) {
        sign = -1;
    } else {
        sign = 0;
    }

    return sign;
}

int main() {
    double num;

    printf("Wprowadz liczbe: \n");
    scanf("%lf", &num);
    printf("%d", sgn(num));

    return 0;
}