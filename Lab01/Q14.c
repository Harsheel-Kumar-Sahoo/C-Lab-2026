// PROGRAM TO CHECK WHETHER A GIVEN CHARACTER IS CAPITAL, LETTER, SMALL CASE LETTER, A DIGIT OR A SPECIAL SYMBOL.
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase character");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase character");
    } else if (ch >= '0' && ch <= '9') {
        printf("Digit");
    } else {
        printf("Special symbol");
    }
    return 0;
}
