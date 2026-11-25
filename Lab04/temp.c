#include <stdio.h>

int words(char *s) {
    int i = 0;
    int count = 0;
    int len = 0;
    while (s[len] != '\0') len++;

    while (i != len) {
        if (i == 0) {
            if (s[0] != ' ' && s[1] == ' ') count++;
        }
        if (i == len - 1) {
            if (s[i] != ' ') count++;
        }
        if (s[i - 1] != ' ' && s[i] != ' ' && s[i + 1] == ' ') count++;
        i++;
    }
    return count;
}

int main(){
    char s[] = "   Hello     world    ";
    printf("%d", words(s));
    return 0;
}