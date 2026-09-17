// PROGRAM TO PRINT SUM OF INDIVIDUAL DIGITS OF A ‘N’ DIGIT NO.
#include <stdio.h>

int main(){
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int numCopy = num;
    int sum = 0;

    while (numCopy != 0) {
        int lastDigit = numCopy % 10;
        numCopy = numCopy / 10;
        sum += lastDigit;
    }

    printf("The sum of digits is %d. \n", sum);
    
    
    
    return 0;
}
