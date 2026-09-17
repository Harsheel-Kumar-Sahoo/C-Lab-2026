// PROGRAM TO SWAP TWO VARIABLES WITHOUT USING THIRD VARIABLE.
#include <stdio.h>

int main(){
    int a = 10;
    int b = 20;

    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("%d \n", a);
    printf("%d", b);
    
    return 0;
}
