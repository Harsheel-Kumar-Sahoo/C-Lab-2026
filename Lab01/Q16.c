// PROGRAM TO READ THREE NOS. AND PRINT MAX.
#include <stdio.h>

int main(){
    int a, b, c;

    printf("Enter the first number : ");
    scanf("%d", &a);
    
    printf("Enter the second number : ");
    scanf("%d", &b);
    
    printf("Enter the third number : ");
    scanf("%d", &c);

    if (a >= b) {
        if (a >= c) {
            printf("Max Element : %d", a);
        }
    } else if (b >= a) {
        if (b >= c) {
            printf("Max Element : %d", b);
        }
    } else if (c >= a) {
        if(c >= b) {
            printf("Max Element : %d", c);
        }
    }
    
    return 0;
}



