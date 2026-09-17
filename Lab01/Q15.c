// PROGRAM TO READ MARKS OF FIVE SUBJECT AND PRINT DIVISION.
#include <stdio.h>

int main(){
    float m1, m2, m3, m4, m5;
    
    printf("Enter the marks of first subject : ");
    scanf("%f", &m1);
    
    printf("Enter the marks of second subject : ");
    scanf("%f", &m2);
    
    printf("Enter the marks of third subject : ");
    scanf("%f", &m3);
    
    printf("Enter the marks of fourth subject : ");
    scanf("%f", &m4);
    
    printf("Enter the marks of fifth subject : ");
    scanf("%f", &m5);

    float avg = (m1 + m2 + m3 + m4 + m5) / 5.0;

    if (avg >= 90.0) {
        printf("A Division \n");
    } else if (avg >= 80.0 && avg <= 90.0) {
        printf("B Division \n");
    } else if (avg >= 70.0 && avg <= 80.0) {
        printf("C Division \n");
    } else {
        printf("D Division");
    }
    return 0;
}
