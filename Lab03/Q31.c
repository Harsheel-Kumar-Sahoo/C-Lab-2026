#include <stdio.h>

int main(){
    char a[100], b[100];

    printf("Enter the first string : ");
    scanf(" %[^\n]", a);
    printf("Enter the second string : ");
    scanf(" %[^\n]", b);

    int i = 0;
    while (a[i] != '\0' && b[i] != '\0') i++;

    if (a[i] == b[i]) {
        printf("Strings are equal.\n");
    } else {
        printf("Strings are not equal.\n");
    }
    return 0;
}