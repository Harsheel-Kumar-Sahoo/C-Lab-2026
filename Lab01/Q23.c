// PROGRAM TO READ TWO NOS. AND CALCULATE POWER WITHOUT USING HEADER FILE(<MATH.H>).
#include <stdio.h>

int main(){
    float base;
    int power;
    printf("Enter the base : ");
    scanf("%f", &base);
    
    printf("Enter the power : ");
    scanf("%d", &power);

    float result = 1;

    for (int i = 0; i < power; i++)
    {
        result *= base;
    }

    printf("%f \n", result);
    
    

    return 0;
}
