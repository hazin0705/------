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

        if (n>0) {
            break;
    }   else {
        printf("양의정수를 다시 입력하세요");
    }
}

    for (i = 1; i<= n; i++) {
        if (i % 3 == 0 && i % 5 != 0) {
            sum += i;
        }
    }
    
    printf("%d",sum);
    return 0;
}
