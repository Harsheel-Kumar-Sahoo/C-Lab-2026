#include <stdio.h>

void replaceAChar(char str[], char ch1, char ch2) {
    int flag = 0;
    for (int i = 0; str[i] != '0'; i++) {
        if (str[i] == ch1) {
            str[i] = ch2;
            printf("Character replaced succesfully.\n");
            flag++;
            break;
        }
    }

    if (!flag) printf("The character to replace does not exist in the string.\n");
}

int main(){
    char str[50];
    printf("Enter the string: ");
    scanf("%[^\n]", str);

    char ch1, ch2;
    printf("Enter the character to replace: ");
    scanf(" %c", &ch1);
    printf("Enter the character to replace with: ");
    scanf(" %c", &ch2);

    replaceAChar(str, ch1, ch2);

    printf("After replacing: %s", str);
    
    return 0;
}