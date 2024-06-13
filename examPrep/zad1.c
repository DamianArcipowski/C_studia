#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void generate(int n, short arr[]) {
    srand(time(NULL));

    for (int i = 0; i < n; i++) {
        arr[i] = (rand() % 101) - 50;
    }
}

short minimum(short arr[], int n) {
    int min = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] < min) min = arr[i];
    }

    return min;
}

int main() {
    const int N = 500;
    int n;

    printf("Wprowadz liczbe z przedziału od 1 do 500\n");
    scanf("%d", &n);

    if (n < 1 || n > N) return 1;

    short arr[n];

    generate(n, arr);

    for (int i = 0; i < n; i++) {
        printf("%d\n", arr[i]);
    }

    printf("Najmniejsza liczba to %d\n", minimum(arr, n));

    return 0;
}