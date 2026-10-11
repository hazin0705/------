#include <stdio.h>

int main(void) {
    int i;
    int j;
    // 1부터 9까지 반복 (행)
    for (i = 1; i<=9; i++){
        // 1부터 9까지 반복 (열)
        for (j = 1; j<=9; j++){
            //결과를 3칸 너비로 정렬
            printf("%3d",i*j);
        }
        //한 행이 끝나면 줄 바꿈
        printf("\n");
    }
        
    return 0;
}