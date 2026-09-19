#include ,stdio.h>
int main(){
  int numbers[5],i;
  printf("Enter 5 numbers");
  for(int i=0,i<=5,i++){
    scanf("%d",numbers[i]);
  }
  printf("\nYou entered array:-\n");
  for(int i=0,i<=5,i++){
    printf("%d",numbers[i]);
  }
  printf("\n");
  return 0;
}
