// PROGRAM TO PRINT SUM OF ALL ODD AND EVEN NO B/W 1 TO N.
#include <stdio.h>

int main(){
    int n;
    int evenSum = 0;
    int oddSum = 0;
    printf("Enter the value of n :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }
    
    printf("Sum of even numbers : %d\n", evenSum);
    printf("Sum of odd numbers : %d\n", oddSum);
    return 0;
}
