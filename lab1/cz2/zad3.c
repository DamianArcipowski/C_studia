#include <stdio.h>

int main() {
    float a, b, equationRoot;

    printf("Wprowadz a oraz b ze wzoru funkcji: \n");
    scanf("%f", &a);
    scanf("%f", &b);

    if (a) {
        equationRoot = -b / a;
        printf("Pierwiastek rownania to: %.2f", equationRoot);
    } else {
        printf("A nie moze byc rowne 0!");
    }
 
    return 0;
}