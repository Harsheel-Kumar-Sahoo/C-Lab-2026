// PROGRAM TO SORT (SELECTION SORT) AN ARRAY.

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

    // Selection sort
    for (int i = 0; i < n; i++) {
        int smallestIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[smallestIndex] > arr[j]) {
                smallestIndex = j;
            }
        }
        int temp = arr[smallestIndex];
        arr[smallestIndex] = arr[i];
        arr[i] = temp;
    }

    // Printing the array
    printf("Array after sorting : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
