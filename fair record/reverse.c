
/* START 
 * Input a number n 
 * SET sum = 0
 * Find the last digit using n%10
 * Add the digit to Sum
 * Remove the last digit using it n/10
 * Repeat steps 4-6 while no>0
 * Display sum
 * Stop*/

#include <stdio.h>
int main(){
  int n, r = 0;
  printf("Enter  number: ");
  scanf("%d", &n);
  while(n>0){
    r = r*10 + n%10;
    n = n/10;
  }
  printf("Reverse = %d \n", r);
  return 0;
}
