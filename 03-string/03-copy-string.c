#include<stdio.h>
#include<string.h>
int main(){
    char original[50];
    char copy[50];
    printf("Enter a string: ");
    scanf("%49s", original);
    strcpy(copy, original);
    printf("Original string: %s\n", original);
    printf("Copied string: %s\n", copy);
    return 0;
}
