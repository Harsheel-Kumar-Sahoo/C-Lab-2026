#include <stdio.h>

int main(){
    char str[50];
    printf("Enter your name: ");
    scanf("%[^\n]", str);

    printf("Your name in ASCII: ");
    for (int i = 0; str[i] != '\0'; i++) {
        int ascii = (int)str[i];
        printf("%d", ascii);
    }

    return 0;
}