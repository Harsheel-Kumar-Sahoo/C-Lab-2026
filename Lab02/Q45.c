// PROGRAM TO READ AN ARRAY OF 10 INTEGERS AND COUNT TOTAL NUMBER OF POSITIVE, NEGATIVE, AND ZERO ELEMENTS
#include <stdio.h>

int main(){
    int arr[10];
    int pcount = 0, ncount = 0, zcount = 0;
    for (int i = 0; i < 10; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > 0) {
            pcount++;
        } else if (arr[i] < 0) {
            ncount++;
        } else {
            zcount++;
        }
    }
    printf("The number of positive elements is %d.\n", pcount);
    printf("The number of negative elements is %d.\n", ncount);
    printf("The number of zero elements is %d.\n", zcount);
    return 0;
}
