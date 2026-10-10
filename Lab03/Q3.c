// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND SWAP VALUES OF THESE ARRAYS.
#include <stdio.h>

int main(){
    int arr1[10], arr2[10];
    for (int i = 1; i <= 2; i++) {
        printf("Enter elements for array %d\n", i);
        for (int j = 0; j < 10; j++) {
            printf("Enter element %d : ", j + 1);
            if (i == 1) {
                scanf("%d", &arr1[j]);
            }
            if (i == 2) {
                scanf("%d", &arr2[j]);
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        int temp = arr1[i];
        arr1[i] = arr2[i];
        arr2[i] = temp;
    }
    
    for (int i = 1; i <= 2; i++) {
        printf("Printing elements of array %d : ", i);
        for (int j = 0; j < 10; j++) {
            if (i == 1) {
                printf("%d ", arr1[j]);
            }
            if (i == 2) {
                printf("%d ", arr2[j]);
            }
            if (j == 9) {
                printf("\n");
            }
        }
    }

    return 0;
}
