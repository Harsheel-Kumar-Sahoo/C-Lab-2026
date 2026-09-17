// PROGRAM TO READ A CHARACTER AND CHECK WHETHER IT IS A SMALL CASE LETTER OR NOT USING CONDITIONAL OPERATOR.
#include <stdio.h>

int main(){
    char ch;
    printf("Enter the character : ");
    scanf("%c", &ch);
    
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase character");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase character");
    }
    return 0;
}
