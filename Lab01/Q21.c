// PROGRAM TO READ TWO NOS. AND PERFORM SPECIFIC TASK (USING ARITHMETIC OPERATOR)AND THIS PERFORM USING SWITCH-CASE.(CASE IN CHAR FORM).
#include <stdio.h>

int main(){
    float num1, num2;
    char op;

    printf("Enter the first number : ");
    scanf("%f", &num1);

    printf("Enter the second number : ");
    scanf("%f", &num2);
    
    printf("Enter the operator [+, -, *, /] : ");
    scanf(" %c", &op);

    printf(" ");

    switch (op) {
        case '+' :
            printf("%f + %f = %f", num1, num2, num1 + num2);
            break;
        case '-' :
            printf("%f - %f = %f", num1, num2, num1 - num2);
            break;
        case '*' :
            printf("%f * %f = %f", num1, num2, num1 * num2);
            break;
        case '/' :
            printf("%f / %f = %f", num1, num2, num1 / num2);
            break;
    }
    return 0;
}
