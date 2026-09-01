#include <stdio.h>
int main()
{
  float area, height, width; 
  printf("Enter base and height");
  scanf("%f %f", &height, &width);
  area = 0.5*width*height;
  printf("Area of triangle: %f", area);
  return 0;
}
