// PROGRAM TO READ AN ARRAY OF 10 INTEGERS AND PRINT SUM OF NUMBERS.
#include <stdio.h>

int main(){
    int arr[10];
    int sum = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("The sum of  elements is %d.\n", sum);
    return 0;
}
