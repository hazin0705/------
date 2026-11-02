#include <stdio.h>

int main(void) {
    int celsius;
    double fire;
    
    for (celsius = -10; celsius<=40; celsius += 5){
        fire = celsius*9/5+32;
        printf("%6d C -> %6f F\n",celsius,fire);

    }

    return 0;
}