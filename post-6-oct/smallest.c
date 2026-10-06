#include <stdio.h>
int main()
{
  int a, b;
  float small;
  printf("Enter two numbers: ");
  scanf("%d %d", &a, &b);
  small = (a+b)?a:b;
  printf("smallest number = %f", small);
  return 0;
}
