// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A 'N' DIGIT NO.
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of digits is %d. \n", sum);

    return 0;
}
