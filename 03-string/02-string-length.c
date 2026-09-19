#include <stdio.h>
#include <string.h>
int main()
{
    char name[50];
    printf("Enter your name: ");
    scanf("%49s", name);
    printf("Length of string = %lu\n", strlen(name));
    return 0;
}
