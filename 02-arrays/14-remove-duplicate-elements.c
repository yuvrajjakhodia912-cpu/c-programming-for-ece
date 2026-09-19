#include <stdio.h>
int main()
{
    int numbers[10];
    int n, i, j, k;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++){
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < n; i++){
        for (j = i + 1; j < n; j++){
            if (numbers[i] == numbers[j]){
                for (k = j; k < n - 1; k++){
                    numbers[k] = numbers[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    printf("Array after removing duplicates:\n");
    for (i = 0; i < n; i++){
        printf("%d ", numbers[i]);
    }
    printf("\n");
    return 0;
}
