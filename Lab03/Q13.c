// PROGRAM TO PERFORM LINEAR SEARCH ON AN ARRAY.
#include <stdio.h>

int main(){
    int n; 
    printf("Enter the number of elements in the array : ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the array elements : \n");
    for (int i = 0; i < n; i++) {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Linear Search
    int found = 0, target;
    printf("Enter the target to search : ");
    scanf("%d", &target);
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            found = 1;
            printf("The element is present at index %d.", i);
            break;
        }
    }
    if (!found) {
        printf("The element is not present in the array.");
    }
    return 0;
}
