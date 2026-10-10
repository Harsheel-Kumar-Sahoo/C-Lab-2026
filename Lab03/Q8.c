// PROGRAM TO READ A 3*3 MATRIX AND PRINT SUM OF ALL ROWS.
#include <stdio.h>

int main(){
    int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element for %d row and %d column : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        int rowSum = 0;
        for (int j = 0; j < 3; j++) {
            rowSum += matrix[i][j];
        }
        printf("The sum of elements in row %d is %d.\n", i + 1, rowSum);
    }


    return 0;
}
