#include <stdio.h>
int square (int a) ;
int main(){
int num;

printf("\n Enter a number: ");
scanf("%d", &num);
square(num);
return 0;
}

int square (int a)
{
int result= a*a;
printf("\n square of number - %d\n", result);
return result;
}  
