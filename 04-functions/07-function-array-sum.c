#include <stdio.h>
int arraySum(int numbers[], int size){
    int i, sum = 0;
    for (i = 0; i < size; i++) {
        sum = sum + numbers[i];
    }
    return sum;
}
int main(){
    int numbers[5] = {10, 20, 30, 40, 50};
    int result;
    result = arraySum(numbers, 5);
    printf("Sum of array = %d\n", result);
    return 0;
}
