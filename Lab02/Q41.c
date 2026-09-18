/* Print Pattern
    1
   121
  12321
 1234321
123454321
*/
#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < (rows - i -1); j++) {
            printf(" ");
        }
        for (int j = 1; j <= (i + 1); j++) {
            printf("%d", j);
        }
        for (int j = i; j >= 1; j--) {
            printf("%d", j);
        }
        for (int j = 0; j < (rows - i -1); j++) {
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}
