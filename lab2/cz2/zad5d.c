#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    
    printf("Wprowadz liczbe n: \n");
    scanf("%d", &n);

    while (b < n) {
        b += a;
        a = b - a;
    }

    printf("Najwieksza liczba ciagu mniejsza od n: %d", a);

    return 0;
}