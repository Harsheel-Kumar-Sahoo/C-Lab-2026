// PROGRAM TO FINDOUT MAX AND SECOND MAX FROM ‘N’ NOS .
#include <stdio.h>

int main(){
    int max, secondMax, n;
    printf("How many numbers to add : ");
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        int num;
        printf("Enter the number : ");
        scanf("%d", &num);
        if (i == 0) {
            max = num;
        } else {
            secondMax = num;
            if (secondMax > max) {
                int temp = max;
                max = secondMax;
                secondMax = temp;
            }
        }
    } 

    printf("Max element : %d\n", max);
    printf("Second Max element : %d", secondMax);

    return 0;
}
