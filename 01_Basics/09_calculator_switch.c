#include<stdio.h>
int main()
{
    float num1, num2;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    switch(operator)
    {
        case '+':
            printf("Result: %.2f\n", num1 + num2); // Print the result of addition
            break;
        case '-':
            printf("Result: %.2f\n", num1 - num2); // Print the result of subtraction
            break;
        case '*':
            printf("Result: %.2f\n", num1 * num2); // Print the result of multiplication
            break;
        case '/':
            if(num2 != 0)
                printf("Result: %.2f\n", num1 / num2); // Print the result of division
            else
                printf("Error: Division by zero is not allowed.\n"); // Print error message for division by zero
            break;
        default:
            printf("Error: Invalid operator.\n"); // Print error message for invalid operator
    }

    return 0; // Return 0 to indicate successful execution
}