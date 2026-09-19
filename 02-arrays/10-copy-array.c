#include <stdio.h>
int main()
{
    int numbers[5];
    int copy[5];
    int i;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5; i++){
        copy[i] = numbers[i];
    }
    printf("Copied array:\n");
    for (i = 0; i < 5; i++){
        printf("%d ", copy[i]);
    }
    printf("\n");
    return 0;
}
