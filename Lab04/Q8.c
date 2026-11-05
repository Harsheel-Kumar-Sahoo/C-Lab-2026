#include <stdio.h>

void isPalindrome(char str[]) {
    int i = 0, j = 0;
    while (str[j] != '\0') j++;
    j--;
    
    while (i < j) {
        if (str[i] != str[j]) {
            printf("Not palindrome");
            return;
        }
        i++; j--;
    }
    printf("Palindrome");
    return;
}

int main(){
    char str[50];
    scanf("%[^\n]", str);
    isPalindrome(str);
    return 0;
}