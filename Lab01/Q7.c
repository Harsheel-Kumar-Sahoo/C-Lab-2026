// PROGRAM TO CALCULATE AREA OF A TRIANGLE.
#include <stdio.h>

int main(){
    float height, base, area;
    printf("Enter the value of height of triangle : ");
    scanf("%f", &height);
    printf("Enter the value of base of triangle : ");
    scanf("%f", &base);

    area = 0.5 * height * base;

    printf("The area of the triangle is %f", area);
    return 0;
}
