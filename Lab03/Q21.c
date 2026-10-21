#include <stdio.h>

int fact(int num) {
    int f = 1;
    for (int i = 1; i <= num; i++) {
        f *= i;
    }
    return f;
} 


int nCr(int n, int r) {
    int ans = fact(n) / (fact(r) * fact(n - r));
}

int main(){
    int n, r;
    printf("Enter the value for n : ");
    scanf("%d", &n);
    printf("Enter the value for r : ");
    scanf("%d", &r);
    printf("The nCr is %d", nCr(n, r));
    return 0;
}