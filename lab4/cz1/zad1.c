#include <stdio.h>

int main() {
    int a = 6;
    int *p = &a;

    printf("*p %d\n", *p);
    printf("*&p: %p\n", *&p);
    printf("&a: %p\n", &a);
    printf("&p: %p\n", &p);
    printf("&*p: %p\n", &*p);
    printf("*&a: %d\n", *&a);

    return 0;
}