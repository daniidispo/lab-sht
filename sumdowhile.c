#include<stdio.h>
int main(){
  int n,i = 0, num;
  int sum = 0;
  float avg;

  printf("How many numbers to find avg and sum of: ");
  scanf("%d", &n);

  printf("enter a number: \n");
  do {
    scanf("%d", &num);
    sum= sum + num;
    i++;
  }while(i<=n);

  avg = sum/n;
  printf("Sum = %d \n", sum);
  printf("avg = %f \n", avg);
  return 0;
}
