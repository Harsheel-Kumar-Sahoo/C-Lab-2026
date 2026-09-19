// PROGRAM TO REVERSE OF A GIVEN NO.
#include <stdio.h>

int main() {
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int revNum = 0;
    while (num != 0) {
        revNum = revNum * 10 + num % 10;
        num = num / 10;
    }

    printf("%d \n", revNum);

    return 0;
}
