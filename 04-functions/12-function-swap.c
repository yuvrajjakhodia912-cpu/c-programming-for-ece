#include <stdio.h>
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int number1, number2;
    printf("Enter first number: ");
    scanf("%d", &number1);
    printf("Enter second number: ");
    scanf("%d", &number2);
    printf("Before swapping: %d %d\n", number1, number2);
    swap(&number1, &number2);
    printf("After swapping: %d %d\n", number1, number2);
    return 0;
}
