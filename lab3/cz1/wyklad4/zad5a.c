#include <stdio.h>

int main() {
    int n, tempi, tempn;

    printf("Wprowadz liczbe: \n");
    scanf("%d", &n);

    for (int i = 1; i < n; i++) {
        tempi = i;
        tempn = n;

        for (; tempi != tempn ;) {
            if (tempi > tempn) tempi -= tempn;
            else tempn -= tempi;
        }

        if (tempi == 1) {
            printf("Liczba %d jest wzajemnie pierwsza z %d\n", i, n);
        }
    }

    return 0;
}