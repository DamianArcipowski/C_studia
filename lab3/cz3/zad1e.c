#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(short arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

int howManyMaximums(const short arr[], int n) {
    int max = arr[0];
    int counter = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] == max) counter++;
    }

    return counter;
}

int main() {
    const int N = 1000;
    srand(time(NULL));

    int n = rand() % N + 1;
    short arr[n];

    generate(arr, n);

    for (int i = 0; i < n; i++) {
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    printf("Ilosc wystapien najwiekszego elementu: %d\n", howManyMaximums(arr, n));

    return 0;
}