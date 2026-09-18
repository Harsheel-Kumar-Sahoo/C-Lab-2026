/* Print Pattern
*
   **
***
 ****
*****
*/
#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < (i + 1); j++) {
                printf("*");
            }
            for (int j = 0; j < (rows - i - 1); j++) {
                printf(" ");
            }
        } else {
            
            for (int j = 0; j < (rows - i - 1); j++) {
                printf(" ");
            }
            for (int j = 0; j < (i + 1); j++) {
                printf("*");
            }
        }
        printf("\n");
    }
    return 0;
}
