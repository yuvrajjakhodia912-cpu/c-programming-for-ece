#include <stdio.h>
int main(){
    char text[100];
    int i;
    printf("Enter a string: ");
    scanf("%99s", text);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] >= 'a' && text[i] <= 'z') {
            text[i] = text[i] - 32;
        }
    }
    printf("Uppercase string: %s\n", text);
    return 0;
}
