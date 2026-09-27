#include <stdio.h>
void add(int a, int b){
    int sum;
    sum = a + b;
    printf("Sum = %d\n", sum);
}
int main(){
    add(10, 20);
    return 0;
}
