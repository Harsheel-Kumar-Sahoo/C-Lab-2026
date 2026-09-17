// PROGRAM TO PRINT 1,3,5,7,9.........N.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number till which you want odd numbers: ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        printf("%d ", i);
        i += 2;
    }
    return 0;
}
