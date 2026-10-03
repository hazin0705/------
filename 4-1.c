#include <stdio.h>

int main(void) {
    /*반지름, 원주, 넓이 선언*/
    int r;
    float circumference;
    float area;
    printf("반지름을 입력하세요.\n");
    /* 반지름 입력*/
    scanf("%d",&r);
    
    /* 원주 계산 후 출력*/
    circumference = 2 * 3.14 * r;
    printf("%f\n",circumference);

    /*넓이 계산후 출력*/
    area = r*r*3.14;
    printf("%f\n",area);

    return 0;
}