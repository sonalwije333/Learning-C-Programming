#include <stdio.h>

int main() {
    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;

    printf("Enter the first number : \n");
    scanf("%lf", &num1);
    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator);  // Space before %c to skip whitespace
    printf("Enter the second number : \n");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                printf("Error: Division by zero!\n");
                return 1;
            }
            break;
        default:
            printf("Invalid Choice\n");
            return 1;
    }
    
    printf("The result is %lf", result);
    return 0;
}