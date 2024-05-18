#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(short arr[], int n, short minVal, short maxVal) {
    for (int i = 0; i < n; i++) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}


int main() {
    const int N = 1000;
    srand(time(NULL));

    int n = rand() % N + 1;
    short arr[n];
    int min, max;

    printf("Wprowadz liczbe minimalna: \n");
    scanf("%d", &min);

    printf("Wprowadz liczbe maksymalna: \n");
    scanf("%d", &max);

    generate(arr, n, min, max);

    for (int i = 0; i < n; i++) {
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    return 0;
}