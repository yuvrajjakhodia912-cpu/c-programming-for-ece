#include <stdio.h>
void addNumbers(int *a, int *b, int *result)
{
    *result = *a + *b;
}
int main()
{
    int number1, number2, result;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    addNumbers(&number1, &number2, &result);
    printf("Sum = %d\n", result);
    return 0;
}
