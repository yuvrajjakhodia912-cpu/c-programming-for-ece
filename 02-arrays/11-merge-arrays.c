#include <stdio.h>
int main()
{
    int first[3], second[3], merged[6];
    int i;
    printf("Enter 3 numbers for first array:\n");
    for (i = 0; i < 3; i++){
        scanf("%d", &first[i]);
    }
    printf("Enter 3 numbers for second array:\n");
    for (i = 0; i < 3; i++){
        scanf("%d", &second[i]);
    }
    for (i = 0; i < 3; i++){
        merged[i] = first[i];
    }
    for (i = 0; i < 3; i++){
        merged[i + 3] = second[i];
    }
    printf("Merged array:\n");
    for (i = 0; i < 6; i++){
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}
