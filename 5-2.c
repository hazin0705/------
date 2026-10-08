#include <stdio.h>

int main(void) {
    int facto=1;
    int num=1;
    while (num<=10){
        facto *= num;
        printf("%d ! = %d \n",num,facto);
        num++;
    }
    return 0; 
}
