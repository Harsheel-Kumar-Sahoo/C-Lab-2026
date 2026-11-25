#include <stdio.h>

void copyRevArr(int* arr1, int* arr2, int n) {
    int i = 0, j = n - 1;
    while (i != n  && j != -1) {
        arr1[i] = arr2[j];
        i++; j--;
    }
    printf("Copied\n");
}

int main(){
    int arr1[] = {1, 2, 3, 4};
    int arr2[] = {8, 6, 4, 2};
    copyRevArr(arr1, arr2, 4);
    
    for (int i = 0; i < 4; i++) {
        printf("%d ",arr1[i]);
    }
    return 0;
}