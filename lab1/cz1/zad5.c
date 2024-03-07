#include <stdio.h>

int main() {
    double accountBalance = 1000;
    
    for (int i = 1; i <= 3; i++) {
        accountBalance += accountBalance * 0.06;
        printf("Stan konta po roku %d wynosi: %4.2f \n", i, accountBalance);
    }

    return 0;
}