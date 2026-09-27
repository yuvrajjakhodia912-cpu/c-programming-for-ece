#include <stdio.h>
int main()
{
    int numbers[6] = {10, 20, 30, 40, 50, 60};
    int *pointer;
    int count = 0;
    pointer = numbers;
    while (count < 6) {
        count++;
    }
    printf("Number of elements = %d\n", count);
    return 0;
}
