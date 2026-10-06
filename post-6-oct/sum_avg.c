#include<stdio.h>
int main()
{
int a, b, c, sum;
float avg;
printf("Enter 3 numbers: ");
scanf("%d %d %d", &a, &b, &c);
sum = a + b + c;
avg = sum/3;
printf("Your Sum is %d", sum);
printf("Your Average is %f", avg);
return 0;
}
