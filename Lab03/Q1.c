// PROGRAM TO READ N NUMBERS AND FIND OUT MAX AND SECOND MAX.
#include <stdio.h>

int main(){
    int n;
    printf("Enter the number of elements to add : ");
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        printf("Enter element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0], secMax = arr[0];
    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            secMax = max;
            max = arr[i];
        } else if (arr[i] > secMax && arr[i] < max) {
            secMax = arr[i];
        }
    }
    printf("Max element : %d\n", max);
    printf("Second max element : %d", secMax);
    return 0;
}
