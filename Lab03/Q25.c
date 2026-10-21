#include <stdio.h>

void isVowel(char ch) {
    switch (ch) {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
        case 'A' :
        case 'E' :
        case 'I' :
        case 'O' :
        case 'U' :
            printf("It is a vowel.\n");
            return;
        default :
            printf("It is not a vowel.\n");
            return;
    }
}

int main(){
    isVowel('a');
    isVowel('z');
    return 0;
}