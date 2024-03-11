#include <stdio.h>
#include <math.h>

int main() {
    float side1, side2, side3, height, area, perimeter;

    printf("Wprowadz dlugosci bokow trojkata: \n");
    if (scanf("%f", &side1) != 1 || scanf("%f", &side2) != 1 || scanf("%f", &side3) != 1) {
        printf("To nie sa boki trojkata! Koncze program...");
        return 0;
    }

    perimeter = side1 + side2 + side3;
    height = pow(side3, 2) - pow(side1 / 2, 2);
    area = side1 * sqrt(height) / 2;

    printf("Obwod trojkata: %f\n", perimeter);
    printf("Pole trojkata: %f", area);

    return 0;
}