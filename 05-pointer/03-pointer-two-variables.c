#include <stdio.h>
int main()
{
    int number1 = 10;
    int number2 = 20;
    int *pointer1;
    int *pointer2;
    pointer1 = &number1;
    pointer2 = &number2;
    printf("Value of number1 = %d\n", *pointer1);
    printf("Value of number2 = %d\n", *pointer2);
    *pointer1 = 50;
    *pointer2 = 100;
    printf("New value of number1 = %d\n", number1);
    printf("New value of number2 = %d\n", number2);
    return 0;
}
