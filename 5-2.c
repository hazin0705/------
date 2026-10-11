#include <stdio.h>

int main(void) {
    int facto=1; // 팩토리얼 누적
    int num=1; //1 ~ 10 까지
    //10이하면 반복
    while (num<=10){
        facto *= num; // 이전 팩토리얼에 현재 숫자를 곱한다

        //현재 숫자와 계산된 팩토리얼 출력
        printf("%d ! = %d \n",num,facto);
        num++; //다음 반복을 위해 숫자 증가
    }
    return 0; 
}
