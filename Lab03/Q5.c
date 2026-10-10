// PROGRAM TO SORT (BUBBLE SORT) AN ARRAY.
#include <stdio.h>

int main(){
    // Reading the array
    int n;
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Printing the array
    printf("Array after sorting : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
