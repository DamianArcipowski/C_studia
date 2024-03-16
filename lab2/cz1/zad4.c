#include <stdio.h>
#include <math.h>

double accountStatus(double balance, double rate, int years) {
    return balance * pow(1 + rate / (100 * balance), years);
}

int main() {
    double balance, rate;
    int years;

    printf("Podaj poczatkowy kapital: \n");
    scanf("%lf", &balance);

    printf("Podaj oprocentowanie: \n");
    scanf("%lf", &rate);

    printf("Podaj dlugosc okresu oszczedzania w latach: \n");
    scanf("%d", &years);

    printf("Kapital wyniesie %lf po %d latach oszczedzania", accountStatus(balance, rate, years), years);

    return 0;
}