#include <stdio.h>

int main(){
    float m1, m2, m3, m4, m5;
    printf("Enter the marks of first subject:");
    scanf("%f", &m1);
    printf("Enter the marks of second subject:");
    scanf("%f", &m2);
    printf("Enter the marks of third subject:");
    scanf("%f", &m3);
    printf("Enter the marks of fourth subject:");
    scanf("%f", &m4);
    printf("Enter the marks of fifth subject:");
    scanf("%f", &m5);

    float total = m1 + m2 + m3 + m4 + m5;

    float perc = (total / 5);

    printf("The total is : %f \n", total);
    printf("The percentage is : %f %", perc);
    
    return 0;
}
