#include <stdio.h>
void changeValue(int *number)
{
    *number = 100;
}
int main()
{
    int number = 10;
    printf("Before function call = %d\n", number);
    changeValue(&number);
    printf("After function call = %d\n", number);
    return 0;
}
