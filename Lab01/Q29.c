// PROGRAM TO CHECK WHETHER A NO IS PALINDROM OR NOT.
#include <stdio.h>
#include <math.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int revNum = 0;
    int numCopy = num;
    int power = log10(num) ;

    while (numCopy != 0) {
        int lastDigit = numCopy % 10;
        numCopy = numCopy / 10;
        revNum += lastDigit * pow(10, power);
        power--;
    }

    if (revNum == num) {
        printf("It is a palindrome number \n");
    } else {
        printf("It is not a palindrome number \n");
    }
    return 0;
}
