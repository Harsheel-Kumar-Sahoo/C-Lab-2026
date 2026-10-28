#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string : ");
    scanf("%s", str);
    int i = 0;
    while (str[i] != '\0') {
        str[i] = (char)(str[i] - 32);
        i++;
    }
    printf("The string is now : %s", str);
    return 0;
}