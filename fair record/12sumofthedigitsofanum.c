/*Start

Declare two integer variables n and sum. Initialize sum = 0.

Read the number n from the user.

Repeat steps 5 and 6 while n > 0.

Find the last digit using n % 10 and add it to sum.

Remove the last digit using n = n / 10.

Display the value of sum.

Stop */
#include <stdio.h>
int main(){
  int n,sum = 0;
  printf("Enter a number: ");
  scanf("%d", &n);
  while(n>0){
    sum = sum + n%10;
    n = n/10;
  }
  printf("Sum of digits = %d \n", sum);
  return 0;
}
