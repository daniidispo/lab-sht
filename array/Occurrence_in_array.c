#include <stdio.h>
int main(){
int arr[] = {1, 2, 3, 29, 7, 17};
int size = sizeof(arr)/sizeof(arr[0]);
int num;
printf("Number to search: ");
scanf("%d", &num);

int i;

do {
if(arr[i] == num) {
printf("Number occurs at %d", i);
}
}while(i < size);

  return 0;
}
