#include<stdio.h>

int main(){
  int a,b;

  printf("Input 1st number:");
  scanf("%d", &a);

  printf("Input 2nd number:");
  scanf("%d", &b);

  int total = a + b;

  printf("Total of 1st and 2nd number is: %d", total);
  return 0;
}