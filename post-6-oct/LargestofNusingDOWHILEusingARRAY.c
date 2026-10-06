#include <stdio.h>
int main(){
  int arr[100], N, i = 0, largest;
  printf("Enter N: ");
  scanf("%d", &N);

  printf("Enter %d numbers:\n", N);

  do{
      scanf("%d", &arr[i]);
      i++;
  }while(N > i);

  largest = a[0];
  i = 1;

  do {
    if (a[i] > largest){
      largest = a [i];
    }
    i++;
  } while (i < N);
  printf("Largest = %d\n", largest);
  return 0;
}
