#include <stdio.h>
int isEven(int number){
    if (number % 2 == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isEven(number) == 1) {
        printf("The number is even.\n");
    } else {
        printf("The number is odd.\n");
    }
    return 0;
}
