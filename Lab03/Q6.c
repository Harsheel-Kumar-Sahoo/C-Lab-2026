// PROGRAM TO REVERSE AN ARRAY.
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

    // Reversing
    int st = 0, end = n - 1;
    while (st <= end) {
        int temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++; end--;
    }

    // Printing the array
    printf("Array after reversing : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
