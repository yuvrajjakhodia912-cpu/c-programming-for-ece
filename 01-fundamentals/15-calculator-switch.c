#include <stdio.h> 
int main() { 
  float a, b; 
  int choice; 
  printf("Enter first number: ");  
  scanf("%f", &a); 
  printf("Enter second number: "); 
  scanf("%f", &b);
  printf("\nCALCULATOR\n");
  printf("1. Addition\n"); 
  printf("2. Subtraction\n");
  printf("3. Multiplication\n");
  printf("4. Division\n");
  printf("Enter your choice: "); 
  scanf("%d", &choice);
  switch(choice){
    case 1:
      printf("Result = %.2f\n", a + b); 
      break;
    case 2:
      printf("Result = %.2f\n", a - b); 
      break;
    case 3:
      printf("Result = %.2f\n", a * b); 
      break;
    case 4:
      if (b != 0) { 
        printf("Result = %.2f\n", a / b); 
      } 
      else { 
        printf("Division by zero is not possible.\n");
      } 
      break;
    default:
      printf("Invalid choice.\n"); 
  }
  return 0:
}
