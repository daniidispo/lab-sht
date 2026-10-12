
#include <stdio.h>
int main(){
  int arr[] = {1, 14, 24, 72, 19, 32, 74};
  int max = arr[0];
  int size = sizeof(arr)/sizeof(arr[0]);

  for (int i = 1; i < size; i++){
    if(arr[i] > max){
      max = arr[i];
    }
  }
  printf("%d\n", max);
  return 0;
}
