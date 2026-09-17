/*
WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT USING THE FORMULA.
CM = M/2+P/2+C/2+E
WHERE CM = Cut of f mark
M = Marks in Mathematics out of 200
P = Marks in Physics out of 200
C = Marks in Chemistry out of 200
E = Marks in entrance examination out of 100
*/

#include <stdio.h>

int main(){
    float m, p, c, e;
    printf("Enter the marks of Maths out of 200 : ");
    scanf("%f", &m);
    printf("\n");
    
    printf("Enter the marks of Physics out of 200 : ");
    scanf("%f", &p);
    printf("\n");
    
    printf("Enter the marks of Chemistry out of 200 : ");
    scanf("%f", &c);
    printf("\n");

    printf("Enter the marks of English out of 100 : ");
    scanf("%f", &e);
    printf("\n");

    float cm = m/2 + p/2 + c/2 + e;
    
    printf("The cut off marks of the student is %f \n", cm);
    

    return 0;
}
