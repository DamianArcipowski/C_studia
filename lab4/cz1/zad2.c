#include <stdio.h>

int main() {
    int a = 6;
    int *p;
    int *q;

    //p = a; 
    //*p = &a;
    //&p = q; 
    //p = &q;
    //p = *&q;
    p = q; //poprawne
    //p = *q;
    *p = q; //poprawne
    *p = *q; //poprawne

    return 0;
}