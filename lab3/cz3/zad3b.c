#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(short arr[], int n, short minVal, short maxVal) {
    for (int i = 0; i < n; i++) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}

int sumOfPositives(const short arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) sum += arr[i];
    }

    return sum;
}

int sumOfNegatives(const short arr[], int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) sum += arr[i];
    }

    return sum;
}


int main() {
    srand(time(NULL));

    int n;
    printf("Wprowadz liczbe elementow tablicy: \n");
    scanf("%d", &n);

    short arr[n];
    int min = -99;
    int max = 99;

    generate(arr, n, min, max);

    for (int i = 0; i < n; i++) {
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    printf("Suma dodatnich: %d\nSuma ujemnych: %d\n", sumOfPositives(arr, n), sumOfNegatives(arr, n));

    return 0;
}