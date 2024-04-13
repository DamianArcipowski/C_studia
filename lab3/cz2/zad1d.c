#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    const int N = 1000;
    srand(time(NULL));

    int n = rand() % N + 1;
    int arr[n];
    int even = 0;
    int odd = 0;

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }

    printf("Parzyste elementy: %d \nNieparzyste elementy: %d\n", even, odd);

    return 0;
}