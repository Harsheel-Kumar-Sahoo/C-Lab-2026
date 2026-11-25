#include <stdio.h>

void stcmp(char s1[], char s2[]) {
    int i = 0;
    
    while (s1[i] != '\0' && s2[i] != '\0') {
        if (s1[i] == s2[i]) i++;
        if (s1[i] > s2[i]) {
            printf("S1 > S2\n");
            return;
        }
        if (s1[i] < s2[i]) {
            printf("S1 < S2\n");
            return;
        }
    }

    if (s1[i] == '\0' && s2[i] == '\0') {
        printf("S2. = S1\n"); 
        return;
    }
    if (s1[i] == '\0') printf("S2. > S1\n");
    if (s2[i] == '\0') printf("S2. < S1\n");
}

int main(){
    stcmp("Hellooooz", "Hellooooo");
    return 0;
}