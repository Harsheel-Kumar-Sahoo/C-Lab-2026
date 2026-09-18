// PROGRAM TO READ AN ARRAY OF 10 INTEGERS AND COUNT TOTAL NUMBER OF ODD AND TOTAL NUMBER OF EVEN ELEMENTS.
#include <stdio.h>

int main(){
    int arr[10];
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("The number of even elements is %d.\n", evenCount);
    printf("The number of odd elements is %d.\n", oddCount);
    return 0;
}
