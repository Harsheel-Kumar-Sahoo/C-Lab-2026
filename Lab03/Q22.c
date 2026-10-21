#include <stdio.h>

void func() {
    int n;
    printf("Enter the size of array : ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0 ; i < n ; i++) {
        printf("Enter the element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    int max = arr[0];

    for (int i = 0; i < n; i++) {
        if (max < arr[i]) max = arr[i];
    }

    printf("The max element in the array is %d.", max);
}

int main(){
    func();
    return 0;
}