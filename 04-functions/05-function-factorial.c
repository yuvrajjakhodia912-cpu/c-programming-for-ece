#include <stdio.h>
int factorial(int n){
    int i, result = 1;
    for (i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}
int main(){
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = factorial(number);
    printf("Factorial = %d\n", result);
    return 0;
}
