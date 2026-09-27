#include <stdio.h>
int reverseNumber(int number){
    int digit, reverse = 0;
    while (number != 0) {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    return reverse;
}
int main(){
    int number, result;
    printf("Enter a number: ");
    scanf("%d", &number);
    result = reverseNumber(number);
    printf("Reversed number = %d\n", result);
    return 0;
}
