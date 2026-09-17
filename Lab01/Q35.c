// READ A NUMBER N AND PRINT A SINGLE DIGIT ANSWER SHOWING SUM OF DIGIT OF N
#include <stdio.h>

int singleDigitSum(int num) {
    int numCopy = num;
    int sum = 0;

    while (numCopy != 0) {
        int lastDigit = numCopy % 10;
        numCopy /= 10;
        sum += lastDigit;
    }
    int newSum = 0;
    while (newSum > 9 || newSum == 0) {
        while (sum != 0) {
            int lastDigit = sum % 10;
            sum /= 10;
            newSum += lastDigit;
        }
        sum = newSum;
    }

    return newSum;

}

int main(){
    printf("%d", singleDigitSum(123456789));
    return 0;
}
