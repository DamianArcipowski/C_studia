#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    const int N = 1000;
    
    int n;
    printf("Wprowadz liczbe elementow tablicy: \n");
    scanf("%d", &n);

    if (n < 1 || n > N) {
        printf("Ilosc elementow musi byc w przedziale od 1 do %d!\n", N);
        return 1;
    }

    int leftIdx, rightIdx;
    printf("Wprowadz lewy indeks: \n");
    scanf("%d", &leftIdx);

    printf("Wprowadz prawy indeks: \n");
    scanf("%d", &rightIdx);

    if (leftIdx < 0 || leftIdx >= n || rightIdx < 0 || rightIdx >= n) {
        printf("Jedna z liczb jest poza zakresem!");
        return 1;
    }

    int arr[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100 + 1;
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    int leftInv = leftIdx;
    int rightInv = rightIdx;

    while (leftInv < rightInv) {
        int temp = arr[leftInv];
        arr[leftInv] = arr[rightInv];
        arr[rightInv] = temp;

        leftInv++;
        rightInv--;
    }

    printf("---------------\n");

    for (int i = 0; i < n; i++) {
        printf("Liczba nr.%d: %d \n", i, arr[i]);
    }

    return 0;
}