/*Start

Declare two integer variables a and b.

Assign 3 to a and 5 to b.

Display the values of a and b.

Add a and b, and store the result in a (a = a + b).

Subtract b from a, and store the result in b (b = a - b).

Subtract b from a, and store the result in a (a = a - b).

Display the swapped values of a and b.

Stop*/
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
