#include <stdio.h>
int main(){
  int temp, a, b;

  a = 3;
  b = 5;

  printf("a: %d\n", a);
  printf("b: %d\n", b);
  temp = a;
  a = b;
  b = temp;


  printf("swapped a: %d\n", a);
  printf("swapped b: %d\n", b);
}
