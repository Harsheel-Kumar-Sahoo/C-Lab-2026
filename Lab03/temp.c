#include <stdio.h>

int main(){
    char a[100], b[50];

    printf("Enter the first string : ");
    scanf("%[^\n]", a);
    printf("Enter the second string : ");
    scanf(" %[^\n]", b);

    int i = 0, j = 0;

    while (a[i] != '\0') i++;
    
    while ((a[i] = b[j])) {
        i++; j++;
    }

    printf("The concatenated string is %s", a);
    return 0;
}