#include <stdio.h>
int main()
{
    int number = 10;
    int *pointer;
    pointer = &number;
    printf("Value of number = %d\n", number);
    printf("Address of number = %p\n", (void *)&number);
    printf("Value stored in pointer = %p\n", (void *)pointer);
    printf("Value using pointer = %d\n", *pointer);
    return 0;
}
