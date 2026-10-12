#include <stdio.h>
int main(){
  int arr[] = {12, 45, 67, 23};
  int size = sizeof(arr)/sizeof(arr[0]);
  int target, found = 0;

  printf("Number to search for: ");
  scanf("%d", &target);

  for(int i = 0; i < size ; i++){
    if (target == arr[i]){
      found = 1;
      printf("Element found\n");
      break;
    }
  }
  if (!found) {
    printf("Element not found\n");
  }
  return 0;
}
