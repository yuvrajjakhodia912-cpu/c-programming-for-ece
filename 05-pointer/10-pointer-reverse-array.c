#include <stdio.h>
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *pointer;
    int i;
    pointer = numbers;
    printf("Original array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(pointer + i));
    }
    printf("\nReversed array:\n");
    for (i = 4; i >= 0; i--) {
        printf("%d ", *(pointer + i));
    }
    printf("\n");
    return 0;
}
