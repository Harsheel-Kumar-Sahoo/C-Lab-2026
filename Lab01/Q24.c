// WRITE A C PROGRAM TO FIND THE VALUE OF Y USING CONDITIONS OF X
#include <stdio.h>
#include <math.h>

int main(){
    float x, n, y;
    printf("Enter the value of x :");
    scanf("%f", &x);
    printf("Enter the value of n :");
    scanf("%f", &n);
    

    if (n == 1)
    {
        y = 1 + x;
    } else if (n == 2)
    {
        y = 1 + (x / n);
    } else if (n == 3) {
        y = 1 + pow(x, n);
    } else if (n > 3 || n < 1)
    {
        y = 1 + (n * x);
    }

    printf("Value of y is %f : ", y);
    
    return 0;
}
