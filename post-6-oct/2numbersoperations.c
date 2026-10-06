#include<stdio.h>
int main()
{
int a, b, product, difference, sum;
float quotient, reminder;
printf("Enter 2 numbers: ");
scanf("%d %d", &a, &b);
sum = a + b;
product = a*b;
difference = a - b;
quotient = a/b;
reminder = a%b;
  printf("sum = %d \n", sum);
  printf("product = %d \n", product);
  printf("difference = %d \n", difference);
  printf("quotient = %f \n", quotient);
  printf("reminder = %f \n", reminder);
return 0;
}
