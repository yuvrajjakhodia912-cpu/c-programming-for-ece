#include <stdio.h>
int main()
{
    int numbers[5] = {10, 20, 30, 40, 50};
    int *pointer;
    int i;
    pointer = numbers;
    printf("Original array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    *pointer = 100;
    *(pointer + 1) = 200;
    *(pointer + 2) = 300;
    *(pointer + 3) = 400;
    *(pointer + 4) = 500;
    printf("\nChanged array:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
