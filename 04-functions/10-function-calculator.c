#include <stdio.h>
float calculate(float a, float b, char operator)
{
    if (operator == '+') {
        return a + b;
    } else if (operator == '-') {
        return a - b;
    } else if (operator == '*') {
        return a * b;
    } else if (operator == '/') {
        return a / b;
    } else {
        return 0;
    }
}
int main()
{
    float number1, number2, result;
    char operator;
    printf("Enter first number: ");
    scanf("%f", &number1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%f", &number2);
    if (operator == '/' && number2 == 0) {
        printf("Cannot divide by zero.\n");
    } else {
        result = calculate(number1, number2, operator);
        printf("Result = %.2f\n", result);
    }
    return 0;
}
