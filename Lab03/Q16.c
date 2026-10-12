// WRITE A FUNCTION TO CHECK WHETHER A NUMBER IS EVEN OR ODD.
#include <stdio.h>

void isPalindrome(int num) {
    int temp = num, rev = 0;
    while (temp != 0) {
        int lastDigit = temp % 10;
        temp /= 10;
        rev = (rev * 10) + lastDigit;
    }
    if (rev == num) {
        printf("Palindrome number.\n");
        return;
    }
    printf("Not a palindrome number.\n");
}

int main(){
    int a = 1234321, b = 12345;
    isPalindrome(a);
    isPalindrome(b);
    return 0;
}
