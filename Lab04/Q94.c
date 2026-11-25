#include <stdio.h>

void copyRevStr(char *dest, char *src) {
    int len = 0;
    while (src[len] != '\0') len++;

    for(int i = 0; i < len; i++){
        dest[i] = src[len - i - 1];
    }
    dest[len] = '\0';
    printf("String copied.\n");
}

int main(){
    char str1[] = "SVNITJAVA";
    char str2[100];
    copyRevStr(str2, str1);

    printf("%s", str2);
    return 0;
}