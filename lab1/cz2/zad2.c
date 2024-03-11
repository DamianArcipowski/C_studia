#include <stdio.h>

int main() {
    float num1, num2;

    printf("Wprowadz dwie liczby: \n");
    scanf("%f", &num1);
    scanf("%f", &num2);

    if (!num2) {
        printf("Nie wolno dzielić przez 0!");
    } else {
        printf("%.2f", num1 / num2);
    } 

    return 0;
}