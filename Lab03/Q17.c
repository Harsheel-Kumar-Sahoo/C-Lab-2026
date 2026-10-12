// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS ARMSTRONG OT NOT.
#include <stdio.h>

void isArmstrong(int num) {
    int temp = num, sum = 0;
    while (temp != 0) {
        int lastDigit = temp % 10;
        temp /= 10;
        sum += lastDigit * lastDigit * lastDigit;
    }
    if (sum == num) {
        printf("Armstrong number.\n");
        return;
    }
    printf("Not an armstrong number.\n");
}

int main(){
    int a = 153, b = 12345;
    isArmstrong(a);
    isArmstrong(b);
    return 0;
}
