// PROGRAM TO FINDOUT MAX AND MIN FROM ‘N’ NOS.
#include <stdio.h>

int main(){
    int max, min, n;
    printf("How many numbers to add : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        if (i == 0) {
            max = num;
            min = num;
        } 
        if (num > max) {
            max = num;
        }
        if (num < max) {
            min = num;
        }
    } 

    printf("Max element : %d\n", max);
    printf("Min element : %d", min);

    return 0;
}
