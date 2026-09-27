#include <stdio.h>
int largest(int a, int b){
    if (a > b) {
        return a;
    } else {
        return b;
    }
}
int main(){
    int result;
    result = largest(25, 40);
    printf("Largest number = %d\n", result);
    return 0;
}
