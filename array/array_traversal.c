#include <stdio.h>
#include <string.h>

int main(){
  char arr[25] = "DANIEL";
  int size = strlen(arr);
  for(int i = 0; i <= size; i++){
    printf("%c", arr[i]);
  }
  printf("\n");
  return 0;
}
