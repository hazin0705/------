#include <stdio.h>

int main(void){

    /* i = 10*/
    int i = 10;

    /* i(10) + 3 = 13 출력*/
    printf("i = %d\n", i+=3);
    /* i(13) - 10 = 3 출력*/
    printf("i = %d\n", i-=10);
    /* i(3) * 3 = 9 출력*/
    printf("i = %d\n", i*=3);
    /*i(9)/2=4 출력*/
    printf("i = %d\n", i/=2);

    return 0;

}