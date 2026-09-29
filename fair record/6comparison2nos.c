#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter 2 numbers to compare:" );
  scanf("%d , %d", &a, &b);
  if (a > b)
    printf("A is greater \n");
  else
    printf("B is greater \n");
  return 0;
}

