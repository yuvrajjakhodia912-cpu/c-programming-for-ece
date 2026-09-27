#include <stdio.h>
int isPrime(int number){
    int i;
    if (number < 2) {
        return 0;
    }
    for (i = 2; i < number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }
    return 1;
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isPrime(number) == 1) {
        printf("The number is prime.\n");
    } else {
        printf("The number is not prime.\n");
    }
    return 0;
}
