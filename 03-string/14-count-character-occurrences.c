#include <stdio.h>
int main(){
    char text[100];
    char character;
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%99s", text);
    printf("Enter a character to count: ");
    scanf(" %c", &character);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == character) {
            count++;
        }
    }
    printf("Character '%c' occurs %d times.\n", character, count);
    return 0;
}
