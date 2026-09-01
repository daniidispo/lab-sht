#include<stdio.h>
int main()
{
  float length, breadth, Area;
  printf("Enter the length and  breadth: ");
  scanf("%f%f", &length, &breadth);
  Area = length*breadth;
  printf("Area of rectangle is: %f\n ", Area);
  return 0;
}

