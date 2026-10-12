// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>

void isEven(int num) {
    if (num % 2 == 0) {
        printf("Even number.\n");
        return;
    } 
    printf("Odd number.\n");
}

int main(){
    int a = 4, b = 5;
    isEven(a);
    isEven(b);
    return 0;
}
