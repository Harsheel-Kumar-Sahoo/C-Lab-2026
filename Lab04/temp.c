#include <stdio.h>

int main(){
    char str[50];
    printf("Enter a string : ");
    scanf("%s", str);

    int lCount = 0, uCount = 0, dCount = 0, sCount = 0;
    int i = 0;

    while (str[i] != '\0') {
        if ('a' <= str[i] && str[i] <= 'z') {
            lCount++;
        } else if ('A' <= str[i] && str[i] <= 'Z') {
            uCount++;
        } else if ('0' <= str[i] && str[i] <= '9') {
            dCount++;
        } else {
            sCount++;
        }
        i++;
    }

    printf("Lowercase alphabets : %d\n", lCount);
    printf("Uppuercase alphabets : %d\n", uCount);
    printf("Digit characters : %d\n", dCount);
    printf("Special characters : %d\n", uCount);
    return 0;
}