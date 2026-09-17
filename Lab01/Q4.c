// PROGRAM TO CONVERT TEMPERATURE FROM FAHRENHEIT TO CENTIGRADE DEGREES.
#include <stdio.h>

int main(){
    float fahrenheit, celsius;
    printf("Enter the fahrenheit value :");
    scanf("%f", &fahrenheit);
    celsius = (fahrenheit - 32) * 5 / 9;
    printf("The corresponding celsius value is %f degree celsius. \n", celsius);
    return 0;
}
