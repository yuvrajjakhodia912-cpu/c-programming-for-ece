#include <stdio.h>
int main()
{
    int numbers[5];
    int i;
    int even = 0, odd = 0;
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++){
        scanf("%d", &numbers[i]);
    }
    for (i = 0; i < 5; i++){
        if (numbers[i] % 2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }
    printf("Even numbers = %d\n", even);
    printf("Odd numbers = %d\n", odd);
    return 0;
}
