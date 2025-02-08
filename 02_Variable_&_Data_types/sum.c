#include<stdio.h>
int main(){
  int num1, num2, sum;
  printf("Wellcome to sum calculator\n");
  printf("Please Enter the first number: ");
  scanf("%d", &num1);
  printf("Please enter the second number: ");
  scanf("%d", &num2);
  sum = num1 + num2;
  printf("Sum: %d", sum);
  return 0;
}