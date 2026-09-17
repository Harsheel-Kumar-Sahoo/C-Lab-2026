// PROGRAM TO PRINT 2,4,6,8,10,12.........N.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number till which you want even numbers: ");
    scanf("%d", &n);
    int i = 2;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}
