#include <stdio.h>

int main(void) {
    //1은 소수가 아니므로 2부터 시작
    for (int i = 2; i<=100; i++){
        int prime_num = 1; // i가 소수라 가정
        for (int j = 2; j<i; j++){
            if (i%j == 0) {
                // 나누어 떨어지면 소수X
                prime_num = 0;
                break; //더 나눌필요 X
            }
        }
        // 소수 출력
        if (prime_num == 1) {
            printf("%3d",i);
        }
    }
    return 0;
}