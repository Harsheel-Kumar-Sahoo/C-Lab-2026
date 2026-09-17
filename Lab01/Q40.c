// READ NUMBERS TILL A NEGATIVE NUMBER IS ENTERED AND CALCULATE SUM OF A LIST OF NUMBERS READ.
#include <stdio.h>

int main(){
    int sum = 0;
    int n;
    do {
        printf("Enter the value of n : ");
        scanf("%d", &n);
        if (n >= 0) {
            sum += n;
        }
    } while (n >= 0);

    printf("The sum is %d", sum);
    return 0;
}
