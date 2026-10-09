#include <stdio.h>
int main(){
  int elem, arr[10], item;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  printf("Enter the elements: \n");
  for (i = 0; i<n; i++) {
    scanf("%d", &a[i]);
  }
  printf("Enter Element to insert: ")
  scanf("%d", &item);
  printf("Enter position to insert: ")
  scanf("%d", &pos);

  for (i=n-1; i>=pos; i--){
    a[i+1] = a[i];

  }

  a[pos-1] = item;
  n++;

  printf("Array after insertion: \n");
  for(i=0; i<n; i++){
    printf("%d, \n", a[i] );
  }
  return 0;
}
