#include <stdio.h>
#include <string.h>
int main(){
    char text[100];
    int i;
    printf("Enter a string: ");
    scanf("%99s", text);
    printf("Reversed string: ");
    for (i = strlen(text) - 1; i >= 0; i--){
        printf("%c", text[i]);
    }
    printf("\n");
    return 0;
}
