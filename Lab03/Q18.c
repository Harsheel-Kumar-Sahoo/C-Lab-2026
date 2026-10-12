// WRITE A FUNCTION EXCHANGE TO INTERCHANGE THE VALUE OF TWO VARIALBLE, SAY X AND Y.
#include <stdio.h>

void numSwap(int* num1, int* num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
    return;
}

int main(){
    int a = 10, b= 20;
    numSwap(&a, &b);
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}
