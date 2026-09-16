#include<stdio.h>
int main(){
  int n,i, num;
  int sum = 0;
  float avg;
  printf("How many numbers to find avg and sum of: ");
  scanf("%d", &n);
  printf("enter a number: \n");
  for (i=1;i<=n;i++) {
    scanf("%d", &num);
    sum= sum + num;
  }
  avg = sum/n;
  printf("Sum = %d \n", sum);
  printf("avg = %f \n", avg);
  return 0;
}
