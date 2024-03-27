#include <stdio.h>

int firstNumber(int n) {
    int temp;

    while (n) {
        temp = n % 10;
        n /= 10;
    }

    return temp;
}

int lastNumber(int n) {
    return n % 10;
}

int howManyLetters(int n) {
    int counter = 0;

    while (n) {
        int temp = n % 10;
        n /= 10;
        counter++;
    }

    return counter;
}

int main() {
    int n;

    printf("Wprowadz liczbe: \n");
    scanf("%d", &n);

    printf("Pierwsza cyfra: %d\n", firstNumber(n));
    printf("Ostatnia cyfra: %d\n", lastNumber(n));
    printf("Ilosc cyfr: %d", howManyLetters(n));

    return 0;
}