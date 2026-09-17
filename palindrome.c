#include <stdio.h>
int main(){
  int n, r = 0;
  int constant;
  printf("Enter  number: ");
  scanf("%d", &n);

  constant = n;
  while(n>0){
    r = r*10 + n%10;
    n = n/10;
  }

  if(r == constant) 
    printf("it is palindrome \n");

  else 
    printf("it is not palindrome \n");

  return 0;
}
