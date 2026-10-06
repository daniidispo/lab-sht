#include <stdio.h>
int main()
{
  float celcius, farenheit;
  printf("Enter temperature in celcius: ")
    scanf("%f", &celcius);
  farenheit = (celcius*9/5) + 32;
  printf("Temperature is farenheit = %f", farenheit);
  return 0;
}
