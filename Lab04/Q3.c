#include <stdio.h>

int main(){
    char str[100];
    printf("Enter a string : ");
    scanf("%s", str);
    int i = 0, count = 0;
    while (str[i] != '\0') {
        switch (str[i]) {
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                count++;
        }
        i++;
    }

    printf("There are %d vowels in the string.", count);
    return 0;
}