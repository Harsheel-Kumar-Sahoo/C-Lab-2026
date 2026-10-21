#include <stdio.h>

int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%[^\n]", str);

    int length = 0;

    while (str[length] != '\0') length++;

    int i = 0, j = length - 1;

    while (i < j) {
        char temp =str[i];
        str[i] = str[j];
        str[j] = temp;

        i++; j--;
    }

    printf("The string after reversing is : %s ", str);

    return 0;
}