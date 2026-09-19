#include <stdio.h>
int main(){
  int a[5],i;
  int sum=0;
  float average;
  printf("Enter array:-");
  for(int i=0,i<=5,i++){
    scanf("%d",&a[5]);
  }
  for (i = 0; i < 5; i++){
        sum = sum + a[i];
  }
  average = sum / 5.0;
  printf("Average = %.2f\n", average);
  return 0;
}
  
