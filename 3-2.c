#include <stdio.h>

int main(void){

    int i = 10;

    /*i(10)출력후 +1증가*/
    printf("i=%d\n",i++);
    /*i(11)+1증가후 i(12)출력*/
    printf("i=%d\n",++i);
    /*i(12)출력후 -1감소*/
    printf("i=%d\n",i--);
    /*i(11) -1 감소후 i(10)출력*/
    printf("i=%d\n",--i);

    return 0;
}