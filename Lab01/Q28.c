// PROGRAM TO CHECK WHETHER A NO IS ARMSTRONG OR NOT.
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);

    int numCopy = num;
    int sumOfCubeOfDigits = 0;
    while (numCopy != 0) {
        int lastDigit = numCopy % 10;
        numCopy /= 10;
        sumOfCubeOfDigits += lastDigit * lastDigit * lastDigit;
    }

    if (num == sumOfCubeOfDigits) {
        printf("It is an Armstrong number \n");
    } else {
        printf("It is not an Armstrong number \n");
    }
    return 0;
}
