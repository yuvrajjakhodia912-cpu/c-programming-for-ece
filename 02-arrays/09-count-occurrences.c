#include <stdio.h>
int main()
{
    int numbers[5];
    int i, search;
    int count = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }
    printf("Enter number to count: ");
    scanf("%d", &search);
    for (i = 0; i < 5; i++){
        if (numbers[i] == search){
            count++;
        }
    }
    printf("%d occurs %d times.\n", search, count);
    return 0;
}
