#include <stdio.h>

int main(void) {
    //입력 할 숫자
    int num;
    // 입력 받은 숫자의 총 합
    int sum = 0;
    //사용자가 끝낼때까지 무한 반복
    while (1){
        scanf("%d",&num);
        sum += num;
        //0입력할때 반복문 탈출
        if (num == 0){
            break;
        } 
    }
    printf("%d",sum);
    return 0; 
}