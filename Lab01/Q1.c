// PROGRAM TO CALCULATE SIMPLE INTEREST.
#include <stdio.h>

int main(){
    float p, r, t;
    printf("Enter the principle amount:");
    scanf("%f", &p);
    printf("Enter the rate of interest:");
    scanf("%f", &r);
    printf("Enter the time period (in years):");
    scanf("%f", &t);
    float SI = (p * r * t) / 100;
    printf("The simple interest is: %f\n", SI);
    
    
    return 0;
}
