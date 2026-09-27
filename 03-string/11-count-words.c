#include <stdio.h>
int main(){
    char text[100];
    int i, count = 1;
    printf("Enter a sentence: ");
    fgets(text, sizeof(text), stdin);
    for (i = 0; text[i] != '\0'; i++) {
        if (text[i] == ' ') {
            count++;
        }
    }
    printf("Number of words = %d\n", count);
    return 0;
}
