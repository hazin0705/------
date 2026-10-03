#include <stdio.h>

int main(void) {
    int c = 'A';
    printf("%c %d %o %x", c,c,c,c);

    double d = 1.2345e-5;
    printf("%f %10.7f %e %g\n", d,d,d,d);

    return 0;

}