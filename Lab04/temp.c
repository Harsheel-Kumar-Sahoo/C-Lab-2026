#include <stdio.h>

void copyArr(int* arr1, int n1, int* arr2, int n2) {
    if (n1 <= n2) {
        for (int i = 0; i < n1; i++) {
            arr1[i] = arr2[i];
        }
    } else if (n1 > n2) {
        for (int i = 0; i < n2; i++) {
            arr1[i] = arr2[i];
        }
    }
    printf("Array copied\n");
}

int main(){
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {2, 4, 6, 8};
    copyArr(arr1, 4, arr2, 4);
    
    for (int i = 0; i < 4; i++) {
        printf("%d ", arr1[i]);
    }

    return 0;
}