#include <stdio.h>

int main(void){
    float num = 0.0;
    for(int i = 0; i<100; i++)
        num += 0.1;

    printf("0.1을 100회 더하면 %f",num);
    return 0;


}