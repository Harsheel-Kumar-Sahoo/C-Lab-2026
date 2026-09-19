// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include <stdio.h>

int main(){
    int num, revNum = 0;
    printf("Enter the number : ");
    scanf("%d", &num);
    int numCopy = num;
    while (numCopy != 0) {
        int lastDigit = numCopy % 10;
        numCopy /= 10;
        revNum = (revNum * 10) + lastDigit;
    }
    if (num == revNum) {
        printf("It is a palindrome number");
    } else {
        printf("It is not a palindrome number");
    }
    return 0;
}
