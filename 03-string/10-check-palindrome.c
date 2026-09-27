#include <stdio.h>
#include <string.h>
int main(){
    char text[100];
    char reverse[100];
    int i, length;
    printf("Enter a string: ");
    scanf("%99s", text);
    length = strlen(text);
    for (i = 0; i < length; i++) {
        reverse[i] = text[length - 1 - i];
    }
    reverse[length] = '\0';
    if (strcmp(text, reverse) == 0) {
        printf("The string is a palindrome.\n");
    } 
    else {
        printf("The string is not a palindrome.\n");
    }
    return 0;
}
