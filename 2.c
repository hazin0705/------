#include <stdio.h>

int main(void) {
    //입력받을 정수n for문 i 총합계산 sum 선언
    int n;
    int i;
    int sum = 0;
    while(1) {
        //정수 n 입력
        printf("양의 정수를 입력하세요");
        scanf("%d",&n);
        //n이 양의 정수면 무한루프 탈출
        if (n>0) {
            break;
        //n이 양의 정수가 아니면 양의 정수입력할때까지 무한루프
    }   else {
        printf("양의정수를 다시 입력하세요");
    }
}
    // i가 n까지 반복
    for (i = 1; i<= n; i++) {
        // i가 3의 배수 이고 5의 배수가 아닐때
        if (i % 3 == 0 && i % 5 != 0) {
            sum += i;
        }
    }
    
    printf("%d",sum);
    return 0;
}
