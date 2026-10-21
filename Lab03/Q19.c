#include <stdio.h>

void fib(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int temp = b;
        b = a + b;
        a = temp;
    }
}

int main(){
    int n; 
    printf("How many terms do you want to print ? : ");
    scanf("%d", &n);
    fib(n);
    return 0;
}