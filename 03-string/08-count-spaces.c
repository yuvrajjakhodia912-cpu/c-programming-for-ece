#include <stdio.h>
int main()
{
    char text[100];
    int i, count = 0;
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++){
        if (text[i] == ' '){
            count++;
        }
    }
    printf("Number of spaces = %d\n", count);
    return 0;
}
