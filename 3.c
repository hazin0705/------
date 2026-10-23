#include <stdio.h>

int isPrime(int num) {
    int i;

    if (num == 1){ //입력값이 1일경우 예외처리
        return 0;
    }
    for(i = 2; i<num; i++) { //2부터 n-1까지 나누기
        if (num%i == 0) { //i와 나누어떨어졌을 경우
            return 0; //소수가 아니므로 0
        }
    }

    return 1; //반복문을 빠져나왔을 경우 소수이므로 1
}

int main(void) {
    int n;
    while(1) {

        printf("1이상의 정수를 입력하세요(0이하 종료):");
        scanf("%d",&n); //무한루프속 계속 입력
        if (n<=0) {
            break; // 0이하 종료
        }
        //n이 양수일경우 소수판별
        if (isPrime(n)==1) {
            printf("%d는 소수입니다\n",n);
        }
        else{
            printf("%d는 소수가 아닙니다\n",n);
        }
    }

    return 0;
}