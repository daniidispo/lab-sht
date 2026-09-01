#include<stdio.h>
int main()
{
  float radius, perimeter, area;
  printf("Enter the radius of the circle:\t");
  scanf("%f", &radius);
  area = 3.14*radius*radius;
  perimeter = 2*3.14*radius;
  printf("perimeter of circle is %f \n", perimeter);
  printf("Area of circle is %f", area);
  return 0;
}
