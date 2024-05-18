#include <stdio.h>

int main() {
    int n;
    int a = 0;
    int b = 1;
    
    printf("Wprowadz liczbe n: \n");
    scanf("%d", &n);

    for (; b < n ;) {
        b += a;
        a = b - a;
    }

    printf("Najwieksza liczba ciagu mniejsza od n: %d\n", a);

    return 0;
}