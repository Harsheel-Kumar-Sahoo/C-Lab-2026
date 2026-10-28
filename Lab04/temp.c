#include <stdio.h>

int main(){
    char str[30];
    char ch;
    printf("Enter a string : ");
    scanf(" %s", &str);
    printf("Enter the character to search : ");
    scanf(" %c", &ch);
    
    int i = 0, found = 0;
    while (str[i] != '\0') {
        if (str[i] == ch) {
            found = 1;
        }
        i++;
    }

    if (found) {
        printf("The character is present in the string.");
    } else {
        printf("The character is not present in the string.");
    }
    return 0;
}