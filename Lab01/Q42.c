// READ A NUMBER N AND PRINT IF N IS PRIME OR COMPOSITE.
#include <stdio.h>

int main(){
    int n, isPrime = 1;
    printf("Enter the number : ");
    scanf("%d", &n);
    if (n < 2) {
        isPrime = 0;
    }
    for (int i = 2; i * i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (isPrime) {
        printf("Prime Number");
    } else {
        printf("Composite Number");
    }
    return 0;
}
