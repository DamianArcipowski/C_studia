#include <stdio.h>

int main() {
    float num1, num2, num3, min, max;

    printf("Wprowadz trzy liczby: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf("%f", &num3);

    min = num1;

    if (num1 > num2 && num2 < num3) {
        min = num2;
    } else if (num1 > num3 && num2 > num3) {
        min = num3;
    }

    max = num1;

    if (num1 < num2 && num2 > num3) {
        max = num2;
    } else if (num1 < num3 && num2 < num3) {
        max = num3;
    }

    printf("Min: %f \nMax: %f", min, max);

    return 0;
}