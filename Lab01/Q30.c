// PROGRAM TO REVERSE OF A GIVEN NO.
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

    printf("%d \n", revNum);
    
    return 0;
}
