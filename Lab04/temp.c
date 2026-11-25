#include <stdio.h>

int max(int a, int b) {
    if (a >= b) return a;
    return b;
}

int maxElement(int *arr, int n) {
    int ans = arr[0];
    for (int i = 0; i < n; i++) {
        ans = max(ans, arr[i]);
    }
    return ans;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("The max element in the array is %d.", maxElement(a, 10));
    return 0;
}