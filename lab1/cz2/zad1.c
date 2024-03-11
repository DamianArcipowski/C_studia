#include <stdio.h>

int main() {
    float someNum;
    printf("Wprowadz liczbe: \n");
    scanf("%f", &someNum);

    if (someNum >= 0) {
        printf("%.2f", someNum);
    } else {
        printf("%.2f", someNum * -1);
    }

    return 0;
}