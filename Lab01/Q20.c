// PROGRAM WHICH WILL WORK LIKE A SIMPLE CALCULATOR USING SWITCH-CASE.
#include <stdio.h>

int main(){
    int num1, num2;
    char op;
    printf("Enter the first number : ");
    scanf("%d", &num1);
    printf("Enter the second number : ");
    scanf("%d", &num2);
    
    printf("Enter the operator [+, -, *, /]: ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Result = %d", num1 + num2);
            break;
        case '-':
            printf("Result = %d", num1 - num2);
            break;
        case '*':
            printf("Result = %d", num1 * num2);
            break;
        case '/':
            printf("Result = %d", num1 / num2);
            break;
    }
    return 0;
}
