#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void generate(short arr[], int n, short minVal, short maxVal) {
    for (int i = 0; i < n; i++) {
        arr[i] = minVal + rand() % (maxVal - minVal + 1);
    }
}

int maximumLengthOfPositivesString(const short arr[], int n) {
    int maxLength = 0;
    int tempLength = 0;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0) {
            tempLength++;
            if (tempLength > maxLength) {
                maxLength = tempLength;
            }
        } else {
            tempLength = 0;
        }
    }

    return maxLength;
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

    printf("Dlugosc najdluszego ciagu liczb dodatnich: %d\n", maximumLengthOfPositivesString(arr, n));

    return 0;
}