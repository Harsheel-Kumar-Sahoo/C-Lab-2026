#include <stdio.h>

int square(int *n) {
    int number = *n;
    return number * number;
}

int cube(int *n) {
    int number = *n;
    return number * number * number;
}

int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    printf("Square = %d\nCube = %d", square(&a), cube(&a));
    return 0;
}