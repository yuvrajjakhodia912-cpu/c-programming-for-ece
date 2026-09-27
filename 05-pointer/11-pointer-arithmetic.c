#include <stdio.h>
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *pointer;
    pointer = numbers;
    printf("First element = %d\n", *pointer);
    pointer++;
    printf("Second element = %d\n", *pointer);
    pointer++;
    printf("Third element = %d\n", *pointer);
    pointer++;
    printf("Fourth element = %d\n", *pointer);
    pointer++;
    printf("Fifth element = %d\n", *pointer);
    return 0;
}
