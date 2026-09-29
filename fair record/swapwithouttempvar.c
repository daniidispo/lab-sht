#include <stdio.h>
int main(){
  int temp, a, b;

  a = 3;
  b = 5;

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  a = a + b;
  b = a - b;
  a = a - b;

  printf("swapped a: %d\n", a);
  printf("swapped b: %d\n", b);
}
