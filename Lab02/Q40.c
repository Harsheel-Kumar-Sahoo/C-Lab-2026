/* Print Pattern
10000
01000
00100
00010
00001
*/
#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < i; j++) {
            printf("0");
        }
        printf("1");
        for (int j = 0; j < (rows - i - 1); j++) {
            printf("0");
        }
        printf("\n");
    }
    return 0;
}
