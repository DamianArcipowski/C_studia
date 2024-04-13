#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 1000;
    srand(time(NULL));

    int n = rand() % N + 1;
    int arr[n];
    int counter = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    int max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    for (int i = 1; i < n; i++) {
        if (arr[i] == max) counter++;
    }

    printf("Najwiekszy element: %d \nIlosc wystapien: %d\n", max, counter);

    return 0;
}