#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(short arr[], int n) {
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

int howManyEvens(const short arr[], int n) {
    int even = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) even++;
    }

    return even;
}

int howManyOdds(const short arr[], int n) {
    int odd = 0;

      for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) odd++;
    }

    return odd;
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

    printf("Parzyste elementy: %d \nNieparzyste elementy: %d\n", howManyEvens(arr, n), howManyOdds(arr, n)); 

    return 0;
}