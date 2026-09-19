#include <stdio.h>
int main()
{
    int first[2][2], second[2][2], sum[2][2];
    int i, j;
    printf("Enter elements of first matrix:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            scanf("%d", &first[i][j]);
        }
    }
    printf("Enter elements of second matrix:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            scanf("%d", &second[i][j]);
        }
    }
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            sum[i][j] = first[i][j] + second[i][j];
        }
    }
    printf("Sum of matrices:\n");
    for (i = 0; i < 2; i++){
        for (j = 0; j < 2; j++){
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
    return 0;
}
