#include <stdio.h>
int main(){
    char text[100];
    int i, count = 0;
    printf("Enter a string: ");
    scanf("%99s", text);
    for (i = 0; text[i] != '\0'; i++){
        if ((text[i] >= 'a' && text[i] <= 'z') &&
            !(text[i] == 'a' || text[i] == 'e' || text[i] == 'i' ||
              text[i] == 'o' || text[i] == 'u')){
            count++;
        }
    }
    printf("Number of consonants = %d\n", count);
    return 0;
}
