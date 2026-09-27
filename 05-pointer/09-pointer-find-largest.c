#include <stdio.h>
int findLargest(int *numbers, int size)
{
    int i, largest;
    largest = *numbers;
    for (i = 1; i < size; i++) {
        if (*(numbers + i) > largest) {
            largest = *(numbers + i);
        }
    }
    return largest;
}
int main()
{
    int numbers[5] = {25, 10, 45, 30, 20};
    int result;
    result = findLargest(numbers, 5);
    printf("Largest number = %d\n", result);
    return 0;
}
