#include <stdio.h>

int main(void) {
    /*데이터 A를 선언후 순서대로 문자열, 10진수, 8진수, 16진수로 출력*/
    int c = 'A';
    printf("%c %d %o %x\n", c,c,c,c);
    /*실수 d선언후 순서대로 소수점 6자리까지
    전체 길이를 10칸으로 잡고, 소수점 아래 7자리까지 출력
    과학적 지수 표기법
    %f와 %e 중 더 간결한 방식을 컴퓨터가 알아서 선택 후 출력*/
    double d = 1.2345e-5;
    printf("%f %10.7f %e %g\n", d,d,d,d);

    return 0;

}