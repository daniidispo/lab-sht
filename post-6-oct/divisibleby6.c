#include <stdio.h>
int main()
{
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  if(num%6 == 0)
    printf("number Divisible by 6");
  else
    printf("number is inDivisible by 6");
  return 0;
}
