#include<stdio.h>
int main(){
  float unit, rate;
  printf("Enter consumption units: ");
  scanf("%f", &unit);
  if (unit <= 200){
    rate = 0.5 * unit;
    printf("Rate of charge: %f", rate);
  }
  else if (unit >= 201 && unit <= 400) {
    rate = 0.65 * unit;
    printf("Rate of charge: %f \n", rate);
  }
  else if (unit >= 201 && unit <= 400) {
    rate = 0.80 * unit;
    printf("Rate of charge: %f \n", rate);
  }
  else if (unit >= 201 && unit <= 400) {
    rate = 1 * unit;
    printf("Rate of charge: %f \n", rate);
  }
  return 0;
}
