#include <stdio.h>

int main() {
    int n, i;
    double fact = 1, sum = 0;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact = fact * i;      
        sum = sum + (i / fact);
    }

    printf("Sum = %.4f\n", sum);

    return 0;
}
