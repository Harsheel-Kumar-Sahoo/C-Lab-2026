#include <stdio.h>
#include <string.h>

int main(){
    // Length of a string
    char str1[] = "Harsheel";
    int length = strlen(str1);
    printf("Length of the string is %d.\n", length);

    // Copy a string to another;
    char str2[] = "Hello";
    char str3[] = "Hi";
    strcpy(str2, str3);
    printf("%s\n", str2);

    // Concatenate
    char str4[50] = "Hello";
    char str5[] = " World!";
    strcat(str4, str5);
    printf("%s", str4);

    
    return 0;
}