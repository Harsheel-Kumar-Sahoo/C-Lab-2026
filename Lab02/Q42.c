/*
PRINT PATTERN
   *   
  ***  
 ***** 
*******
 ***** 
  ***  
   *   
*/
#include <stdio.h>

int main(){
    int rows;
    printf("Enter the number of rows : ");
    scanf("%d", &rows);
    for (int i = 0; i < rows / 2; i++) {
        for (int j = 0; j < (rows - (2 * i) - 1) / 2; j++) {
            printf(" ");
        }
        for (int j = 0; j < (2*i + 1); j++) {
            printf("*");
                
        }
        for (int j = 0; j < (rows - (2 * i) - 1) / 2; j++) {
            printf(" ");
        }
        printf("\n");

    }

    for (int i = 0; i < rows; i++) {
        printf("*");
    }
    printf("\n");

    for (int i = 0; i < (rows / 2); i++) {
        for (int j = 0; j <  (i + 1); j++) {
            printf(" ");
        }
        for (int j = 0; j < (rows - (2 * (i + 1))); j++) {
            printf("*");
        }
        for (int j = 0; j <  (i + 1); j++) {
            printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
