#include <stdio.h>
int add(int a, int b){
    int sum;
    sum = a + b;
    return sum;
}
int main(){
    int result;
    result = add(10, 20);
    printf("Sum = %d\n", result);
    return 0;
}
