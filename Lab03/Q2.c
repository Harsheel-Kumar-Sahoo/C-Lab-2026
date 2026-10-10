// PROGRAM TO READ TWO ARRAYS OF 10 INTEGERS AND STORE ADDITION OF THOSE ARRAYS INTO THIRD.
#include <stdio.h>

int main(){
    int arr1[10], arr2[10], arr3[10];
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
        arr3[i] = arr1[i] + arr2[i];
    }
    printf("Sum array : ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr3[i]);
    }

    
    return 0;
}
