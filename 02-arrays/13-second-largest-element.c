#include <stdio.h>
int main()
{
    int numbers[5];
    int i;
    int largest, secondLargest;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }
    largest = numbers[0];
    secondLargest = numbers[0];
    for (i = 1; i < 5; i++){
        if (numbers[i] > largest){
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest){
            secondLargest = numbers[i];
        }
    }
    printf("Second largest element = %d\n", secondLargest);
    return 0;
}
