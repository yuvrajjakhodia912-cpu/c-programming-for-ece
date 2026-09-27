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
    int number1 = 10;
    int number2 = 20;
    printf("Before swapping: %d %d\n", number1, number2);
    swap(&number1, &number2);
    printf("After swapping: %d %d\n", number1, number2);
    return 0;
}
