#include<stdio.h>
int main()
{
  int a, b, c;
  printf("Enter 3 nos.: ");
  scanf("%d%d%d", &a, &b, &c);
  if (a > b && a > c)
    printf("A is the greatest \n");
  else if (b > a && b > c)
    printf("B is the greatest \n");
  else
    printf("C is the greatest \n");
  return 0;
}

