// PROGRAM TO READ A 3*3 MATRIX AND PRINT ITS TRANSPOSE.
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
        for (int j = i + 1; j < 3; j++) {
            int temp = matrix[i][j];
            matrix[i][j] = matrix[j][i];
            matrix[j][i] = temp;
        }

    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }


    return 0;
}
