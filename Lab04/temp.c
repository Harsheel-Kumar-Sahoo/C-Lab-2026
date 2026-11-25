#include <stdio.h>

void length(char *s) {
    int i = 0, j = 0; 
    while (s[i] != '\0') {
        if (s[i] != ' ') j++;
        i++;
    }
    printf("Length including spaces: %d\n", i);
    printf("Length excluding spaces: %d\n", j);
}

int main(){
    char str[] = "Hello Hi";
    length(str);
    return 0;
}