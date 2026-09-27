#include <stdio.h>
int main()
{
    char text[100];
    int i;
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    printf("String without spaces: ");
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] != ' ') {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}
