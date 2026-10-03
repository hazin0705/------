#include <stdio.h>

int main(void) {
    int r;
    float circumference;
    float area;
    printf("반지름을 입력하세요.\n");
    scanf("%d",&r);
    
    circumference = 2 * 3.14 * r;
    printf("%f\n",circumference);

    area = r*r*3.14;
    printf("%f\n",area);

    return 0;
}