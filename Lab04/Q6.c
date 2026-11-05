#include <stdio.h>

int countCharacters(char str[]) {
    int i = 0;
    while (str[i] != '\0') i++;
    return i;
}

int countWords(char str[]) {
    int words = 0;
    int i = 0;
    int flag = 0;
    while (1) {
        if (str[i] == '\0' && str[i - 1] != ' ') {
            words++;
            return words;
        }
        if (i == 0) {
            i++;
        } else if (str[i] != ' ') {
            i++;
        } else if (str[i] == ' ' && str[i - 1] != ' ') {
            words++;
            i++;
        } else if (str[i] == ' ' && str[i - 1] == ' ') {
            i++;
        }
    }

    return words;
}

int main(){
    char name[50];
    printf("Enter the string : ");
    scanf("%[^\n]", name);
    printf("Number of characters : ");
    printf("%d\n", countCharacters(name));
    printf("Number of words : ");
    printf("%d\n", countWords(name));
    return 0;
}