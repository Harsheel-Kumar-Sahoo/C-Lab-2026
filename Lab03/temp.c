#include <stdio.h>

void findLength() {
    char str[100];
    printf("Enter the line of text : ");
    scanf("%[^\n]", str);
    int len = 0;
    while (str[len] != '\0') len++;
    printf("The length of the line you entered is %d.", len);
}

int main(){
    findLength();
    return 0;
}