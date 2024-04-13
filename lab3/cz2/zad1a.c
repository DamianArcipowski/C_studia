#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() { // TO FINISH
    const int N = 1000;
    srand(time(NULL));

    int n = rand() % N + 1;
    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) arr[i] = 3 * arr[i] + 1;
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    return 0;
}