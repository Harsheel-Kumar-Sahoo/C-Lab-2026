// PROGRAM TO READ A 3*3 MATRIX AND SUBTRACT THEIR VALUE AND STORE THEM IN THIRD
MATRIX.
#include <stdio.h>

int main(){
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];
    printf("Enter elements for first matrix : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element for %d row and %d column : ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements for second matrix : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element for %d row and %d column : ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matrix3[i][j] = matrix1[i][j] - matrix2[i][j];
        }

    }

    printf("Printing the third matrix : \n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix3[i][j]);
        }
        printf("\n");
    }


    return 0;
}
