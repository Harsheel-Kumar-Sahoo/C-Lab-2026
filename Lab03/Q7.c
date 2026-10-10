// PROGRAM TO READ A 3 * 3 MATRIX AND FINDOUT MAX AND MIN ELEMENT.
#include <stdio.h>

int main(){
    int matrix[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter the element for %d row and %d column : ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }

    int max = matrix[0][0], min = matrix[0][0];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (max < matrix[i][j]) max = matrix[i][j];
            if (min > matrix[i][j]) min = matrix[i][j];
        }
    }

    printf("The maximum element is : %d\n", max);
    printf("The minimum element is : %d\n", min);

    return 0;
}
