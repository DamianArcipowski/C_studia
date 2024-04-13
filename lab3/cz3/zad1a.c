#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(int *arr) {
    for (unsigned int i = 0; i < sizeof(arr) / 4; i++) {
        arr[i] = rand() % 100 + 1;
    }
}

int main() {
    const int N = 1000;
    srand(time(NULL));

    int n = rand() % N + 1;
    int arr[n];

    generate(arr);

    for (int i = 0; i < n; i++) {
        printf("%d \n", arr[i]);
    }

    return 0;
}