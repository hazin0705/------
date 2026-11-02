#include <stdio.h>

int fibonacci(int n) {
    int sum;
    if (n == 1 || n== 2) {
        return 1;
    }
    else {
        sum = fibonacci(n-2) + fibonacci(n-1);
        return sum;
    }
}

int main(void) {
    int n;
    scanf("%d",&n);
    printf("%d",fibonacci(n));

    return 0;
}