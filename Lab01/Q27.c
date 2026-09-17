// PROGRAM TO CHECK WHETHER A NO IS PRIME OR NOT.
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int isPrime = 1;
    for (int i = 2; i*i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 1) {
        printf("It is a prime number. \n");
    } else {
        printf("It is not a prime number. \n");
    }
    return 0;
}
